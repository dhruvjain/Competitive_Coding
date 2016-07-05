#include <bits/stdc++.h>

using namespace std;

int main(){
	string input;
	cin>>input;
	int count[4];
	memset(count,0,sizeof(count));
	int len = input.size();
	for(int i=0;i<len;i++){
		if(input[i]=='h')
			count[0]++;
		if(input[i]=='e' && count[0]>0)
			count[1]++;
		if(input[i]=='l' && count[1]>0)
			count[2]++;
		if(input[i]=='o' && count[2]>1)
			count[3]++;
	}
	if(count[0]>0 && count[1]>0 && count[2]>1 && count[3]>0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}