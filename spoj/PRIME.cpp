#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <string>
#include <cassert>

using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef pair<int,pii> edge;

#define tr(vec,it) for(__typeof(vec.begin()) it = vec.begin();it!=vec.end();++it)
#define forup(i,a,b) for(int i=a; i<b; ++i)
#define fordn(i,a,b) for(int i=a; i>b; --i)
#define rep(i,a) for(int i=0; i<a; ++i)
#define rep2(i,a,b) for(__typeof(a) i = (a); i < (b) ; i++)

#define dforup(i,a,b) for(i=a; i<b; ++i)
#define dfordn(i,a,b) for(i=a; i>b; --i)
#define drep(i,a) for(i=0; i<a; ++i)

#define slenn(s,n) for(n=0; s[n]!=13 and s[n]!=0; ++n);s[n]=0

#define gi(x) scanf("%d",&x) // get int
#define gl(x) cin>>x // get long 
#define gd(x) scanf("%lf",&x) // scan int
#define gs(x) scanf("%s",x) // scan string

#define pis(x) printf("%d ",x) 
#define pin(x) printf("%d\n",x)
#define pls(x) cout<<x<<" "
#define pln(x) cout<<x<<"\n"
#define pds(x) printf("%.12f ",x)
#define pdn(x) printf("%.12f\n",x)
#define pnl() printf("\n")

#define sz size
#define fi first
#define sc second

#define ed first
#define eu second.first
#define ev second.second

#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()

const int inv=1000000000;
const int minv=-inv;

char isprime[46344]={0};

int primes[5000],counts=0;

void sieve()
{
	isprime[1]=1;
	for(int i=2;i<46344;i+=1)
	{
		if(!isprime[i])
		{
			primes[counts++] = i;
			for(int j=i*i;j<46344;j+=i)
				isprime[j] = 1;
		}
	}

}


int main(){
	int t;
	gi(t);
	sieve();
	while(t--){
		long long int m,n;
		scanf("%lld %lld",&m,&n);
		if(m<=2){
			pin(2);m = 3;
		}
		if(m%2==0)
			m++;
		int cap = sqrt(n)+1;
		char is_prime[1000001]={0};
		for (int i=0;i<counts;i++){
			
			if(primes[i]>=cap)
				break;	
			int k=primes[i];
			long long int start;
			if(k>=m)
				start = 2*k;
			else
				start = m+ (k+ (k-m)%k)%k;
			for(long long int j=start;j<=n;j+=k){
				is_prime[j-m] = 1;
			}
		}
		for(long long int i=m;i<=n; i+=2){
			if (!is_prime[i-m])
				printf("%lld\n",i );
		}
		
		//printf("\n");
	}
}