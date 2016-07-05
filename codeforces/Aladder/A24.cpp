#include <bits/stdc++.h>

using namespace std;
struct dragon
{
	int ds;
	int bonus;
};

bool func(dragon a ,dragon b){
	return a.ds<b.ds;
}
int main(){
	int n,s;
	cin>>s>>n;
	dragon d[n];
	for(int i=0;i<n;i++)
		cin>>d[i].ds>>d[i].bonus;

	sort(d,d+n,func);
	int i=0;
	while(i<n){
		
		if(d[i].ds<s)
			s+=d[i].bonus,i++;
		else{
			cout<<"NO"<<endl;
			return 0;
		}
	
	}
	cout<<"YES"<<endl;
	return 0;
}