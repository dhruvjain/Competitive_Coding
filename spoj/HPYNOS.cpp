#include <bits/stdc++.h>

using namespace std;

long long getsquaresum(long long n){
	long long ans = 0;

	while(n){
		int k = n%10;
		ans +=(k*k);
		n=n/10;
	}
	return ans;
}

int main(){
	int count = 0;
	long long n;
	cin>>n;
	while(n*n!=1){
		n=getsquaresum(n);
		count++;
		if(n/10==0){
			if(n==1 || n==7)
				break;
			else{
				cout<<-1<<endl;
				return 0;
			}
		} 
					
	}
	cout<<count<<endl;
	return 0;
}