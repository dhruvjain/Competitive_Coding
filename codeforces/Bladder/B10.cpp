#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin>>str;
	int curlen =str.size();
	int k;
	cin>>k;

	int val[26];
	for(int i=0;i<26;i++)
		cin>>val[i];
	
	int cur_val = 0;
	for(int i=0;i<curlen;i++)
		cur_val+= (i+1)* val[str[i]-'a'];

	int mx_val=val[0];
	for(int i=1;i<26;i++)
		if(val[i]>mx_val)
			mx_val = val[i];

	
	cur_val+= (k*curlen + k*(k+1)/2)*mx_val; 
	cout<<cur_val<<endl;

	return 0;

}