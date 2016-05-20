#include <bits/stdc++.h>

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
#define num 1000000007

LL mod(LL n){
	return n%num;
}
void multiply(LL F[2][2],LL M[2][2]){
  LL x =  mod(mod(F[0][0]*M[0][0]) + mod(F[0][1]*M[1][0]));
  LL y =  mod(mod(F[0][0]*M[0][1]) + mod(F[0][1]*M[1][1]));
  LL z =  mod(mod(F[1][0]*M[0][0]) + mod(F[1][1]*M[1][0]));
  LL w =  mod(mod(F[1][0]*M[0][1]) + mod(F[1][1]*M[1][1]));
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

void Power(LL fib[2][2],LL n){

	if(n==0|| n==1)
		return;
	LL M[2][2] = {{1,1},{1,0}};
	Power(fib,n/2);
	multiply(fib,fib);

	if(n%2!=0)
		multiply(fib,M);
}


LL fibo(LL n){
	LL fib[2][2] = {{1,1},{1,0}};
	if(n==0)
		return 0;
	Power(fib,n-1);
	return fib[0][0];
}


int main(){

	int t;
	cin>>t;
	LL n,m,ans;
	while(t--){
		cin>>n>>m;
		ans = fibo(m+2)-fibo(n+1);
		while(ans<0)
			ans += num;
		printf("%lld\n",mod(ans));
	}
	return 0;
}
