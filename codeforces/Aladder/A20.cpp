#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n,k,m,ans;
	cin>>n>>k;
	if(n%2==0)
		m=n/2;
	else
		m=n/2 +1;

	if(k<=m)
		ans=1+(k-1)*2;
	else
		ans = 2+ (k-m-1)*2;
	cout<<ans<<endl; 
}