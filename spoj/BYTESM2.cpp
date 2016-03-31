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

int max_of(int a,int b,int c){
	return a>b? (a>c?a:c):(b>c?b:c); 
}
int main(){
	int mat[101][101];
	int dp[101][101];
	int t;
	cin>>t;
	while(t--){
		memset(mat,0,sizeof(mat));
		memset(dp,0,sizeof(dp));
		int h,w;
		cin>>h>>w;
		rep(i,h)
			rep(j,w)
				cin>>mat[i][j];
		rep(j,w)
			dp[0][j]=mat[0][j];

		forup(i,1,h)
			forup(j,0,w){
				dp[i][j] = mat[i][j] + max_of( (i>0) ? dp[i-1][j]:0, (i>0 && j<w-1)?dp[i-1][j+1]:0, (i>0&&j>0)? dp[i-1][j-1]:0 );
			}
		
		int ans = dp[h-1][0];
		forup(i,1,w){
			if(dp[h-1][i]>ans)
				ans=dp[h-1][i];
		}
		cout<<ans<<endl;
	}	
}