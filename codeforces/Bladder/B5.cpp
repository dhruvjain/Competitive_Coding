#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n,l,a;
	double radius;
	cin>>n>>l;
	long long arr[n];

	for(int i =0;i<n;i++ )
		cin>>arr[i];
	sort(arr,arr+n);

	radius = arr[0];
	
	for(int i=1;i<n;i++){
		if((arr[i]-arr[i-1])*1.0/2-radius>1e-9)
			radius = (arr[i]-arr[i-1])*1.0/2;
	}
	if(l-arr[n-1]*1.0-radius>1e-9)
		radius = l-arr[n-1]*1.0;
	cout<<fixed;
	cout<<setprecision(10);
	cout<<radius<<endl;
	return 0;
}