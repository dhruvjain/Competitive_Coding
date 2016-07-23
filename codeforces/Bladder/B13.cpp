#include <bits/stdc++.h>
#define ll long long int
using namespace std;

long long int num = 1000000007;
ll modulo(ll a){
	return (a%1000000007 + 1000000007) % 1000000007
	
}
int main(){

	long long int x,y,n;
	cin>>x>>y>>n;

	long long int res = n%6;
	if(res==0)
		cout<<modulo(x-y)<<endl;
	else if(res==1)
		cout<<modulo(x)<<endl;

	else if(res==2)
		cout<<modulo(y)<<endl;
	
	else if(res==3)
		cout<<modulo(y-x)<<endl;
	
	else if(res==4)
		cout<<modulo(-1*x)<<endl;
	
	else if(res==5)
		cout<<modulo(-1*y)<<endl;
	

	return 0;

}