#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	getline(cin,str);
	int count[26];
	memset(count,0,sizeof(count));

	int len=str.size();
	if(len==2){
		cout<<0<<endl;
		return 0;
	}

	int j=1,distcount=0;

	while(j<len-1){
		if(count[str[j]-'a']==0)
		 	distcount++,count[str[j]-'a']++;
		j+=3;
	}
	cout<<distcount<<endl;
	return 0;
}