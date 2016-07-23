#include <bits/stdc++.h>

using namespace std;
#define print(cnt,x) cout<<"Case #"<<cnt<<": "<<x<<"\n";

double sumval(double arr[],int n, double r){
	int power = 0;
	double val=0.0;
	for(int i=n;i>=1;i--){
		val+= arr[i]*pow(1+r,power);
		power++;
	}
	return val;
}

double calcirr(double arr[],int n){
	double initial_amt = arr[0];
	double r;
	double low=-1,high=1;
	while(high-low>=1e-9){
		r=(low+high)/2;
		double A = initial_amt*pow(1+r,n);
		double B = sumval(arr,n,r); 
		
		if (A-B>=1e-9){
			high =r;
		}
		else 
			low = r;
	}
	return r;
}

int main(){
	int t;
	cin>>t;
	int cnt=0;
	while(t--){
		int n;
		cin>>n;
		double arr[n+1];
		for(int i=0;i<=n;i++)
			cin>>arr[i];
		cnt++;
		std::cout << std::fixed;
    	std::cout << std::setprecision(12);
		print(cnt,calcirr(arr,n));
	}
}