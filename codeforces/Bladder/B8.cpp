#include <bits/stdc++.h>
using namespace std;

char prime[1000001] = {0};

void seive(){

	for(int i=2;i*i<=1000000;i+=1){
		if(!prime[i])
		{
			for(int j=2*i;j<=1000000;j+=i)
				prime[j]=1;
		}
	}
}

int main(){

	seive();
	long long int n;
	cin>>n;

	for(long long int i=0;i<n;i++){
		long long int num,square_root;
		cin>>num;
		square_root = sqrt(num);
		if(square_root*square_root==num && !prime[square_root] && num!=1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}


}