#include <bits/stdc++.h>

using namespace std;

char prime[1000000]={0};

int P[100000],k;

void sieve()
{
	
	P[k++]=2;

	for(int i=3;i*i<1000000;i+=2)
	{
		if(!prime[i])
		{
			P[k++]=i;
			for(int j=i*i;j<1000000;j+=i+i)
				prime[j] = 1;
		}
	}

	for(int i=1001;i<1000000;i+=2)
		if(!prime[i])
			P[k++]=i;
}

long long int num_divisors(long long int num){
	int k=0;
	long long int total=1;

	for(int j=P[k];j*j<=num;j=P[++k]){

		int count=0;

		while(num%j==0){
			num=num/j;
			count++;
		}
		total*=(count+1);
	}

	if(num!=1)
        total*=2;
    return total;
}

int main(){
	sieve();
	
	int t;
	scanf("%d",&t);
	while(t--){
		long long int a,b;
		scanf("%lld %lld",&a,&b);
		long long int num = __gcd(a,b);
		printf("%lld\n",num_divisors(num));
	}
}