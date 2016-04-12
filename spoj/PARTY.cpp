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

const int inv=1000000000;
const int minv=-inv;

int main(){
	int budget,n;

	while(1){
		cin>>budget>>n;
		if(budget==0 && n==0)
			break;
		int cost[n];
		int val[n];
		int K[n+1][budget+1];

		rep(i,n){
			cin>>cost[i]>>val[i];
		}
		rep(i,n+1)
			rep(j,budget+1){
				if(i==0 || j==0)
					K[i][j]=0;
				else if(cost[i-1]<=j)
					K[i][j]=max(val[i-1]+ K[i-1][j-cost[i-1]],K[i-1][j]);
				else
					K[i][j]=K[i-1][j];
			}
		int ans = 0;
		for(int i=0;i<=budget;i++)
			if(K[n][i]==K[n][budget]){
				ans = i;break;
			}
		
		cout<<ans<<" "<<K[n][budget]<<endl;
	}
}