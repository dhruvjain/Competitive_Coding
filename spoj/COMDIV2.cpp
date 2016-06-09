#include <bits/stdc++.h>

using namespace std;

int num_divisors(int n){
	int count = 0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0 && i*i!=n)
			count+=2;
		if(n%i==0 && i*i==n)
			count+=1;
	}
	return count;
}


int main(){
	
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		int num = __gcd(a,b);
		printf("%d \n",num_divisors(num));
	}
}