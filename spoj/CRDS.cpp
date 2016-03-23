#include <bits/stdc++.h>

using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long ans = n*(n+1) + n*(n-1)/2;
		cout<<ans%1000007<<endl;
	}
}