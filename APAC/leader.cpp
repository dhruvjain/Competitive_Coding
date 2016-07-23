#include <bits/stdc++.h>

using namespace std;
#define print(cnt,x) cout<<"Case #"<<cnt<<": "<<x<<"\n";

int numdiffchar(string input){
	int count[26];
	memset(count,0,sizeof(count));
	int len=input.size(), distcount=0;

	for(int i=0;i<len;i++){
		if(input[i]!=' ' && count[input[i]-'A']==0)
			distcount++,count[input[i]-'A']++;
	}
	return distcount;
}

int main(){
	int t;
	cin>>t;
	int cnt=0;
	while(t--){
		int n;
		cin>>n;
		std::vector<string> namelist;
		cin.ignore();
		for(int i=0;i<n;i++){
			string name;
			
			getline(std::cin, name);
		
			namelist.push_back(name);
			
		}
		
		sort(namelist.begin(),namelist.end());
		string candidate=namelist[0];
		int numchar  =numdiffchar(candidate);

		for(std::vector<string>::iterator it = namelist.begin(); it != namelist.end(); ++it) {
    		// cout<<*it<<endl;
    		int numc = numdiffchar(*it);
    		if(numc>numchar)
    			candidate = *it,numchar=numc;
		}
		cnt++;
		print(cnt,candidate);
	}
}