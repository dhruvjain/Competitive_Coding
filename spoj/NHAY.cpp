#include <bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2;
	int t,num;
	
	while(scanf("%d",&num)!=EOF){
		cin>>s1>>s2;
		int found  = s2.find(s1,0);
		int offset = 0;
		while(found!=string::npos){
			cout<<found<<endl;
			found = s2.find(s1,found+1);
		}
		cout<<endl;
	}

}