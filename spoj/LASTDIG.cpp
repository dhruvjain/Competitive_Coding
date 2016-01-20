#include <bits/stdc++.h>
using namespace std;
#define rep(i,a) for(int i=0; i<a; ++i)


#define gi(x) scanf("%d",&x) // get int

#define pin(x) printf("%d\n",x)


const int inv=1000000000;
const int minv=-inv;

int main(){
	int t,a;
	long long int b;
	gi(t);
	while(t--){
		gi(a);
		a = a%10;
		scanf("%lld",&b);
		if(b==0){
			pin(1);
			continue;
		}
		int x = b%4;
		if(x==0){
			int ans=1;
			rep(i,4){
				ans=ans*a;
				ans = ans %10;
			}
			pin(ans);
		}
		else{
			int ans=1;
			rep(i,x){
				ans=ans*a;
				ans = ans%10;
			}
			pin(ans);	
		}
	}
}