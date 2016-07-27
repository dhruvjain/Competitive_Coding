#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;

	int count[26];
	memset(count,0,sizeof(count));
	int len=str.size();
	int oddcount=0;
	for(int i=0;i<len;i++){
		if(count[str[i]-'a']%2==0)
			oddcount++;
		else
			oddcount--;
		count[str[i]-'a']++;
	}
	if(oddcount==0){
		cout<<"First"<<endl;return 0;
	}
	if(oddcount%2==0)
		cout<<"Second"<<endl;
	else
		cout<<"First"<<endl;
	

}