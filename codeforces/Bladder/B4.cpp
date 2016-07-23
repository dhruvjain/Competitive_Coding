#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,m,kmin,kmax;
	cin>>n>>m;

	long long  num1 = n/m + 1,num2 = n/m ;
	
	kmin = (n%m)*num1*(num1-1)/2 + (m-n%m) * num2*(num2-1)/2; 
	
	kmax = ((n-m+1)*(n-m))/2;
	cout<<kmin<<" "<<kmax<<endl;
}