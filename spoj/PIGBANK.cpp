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
int K[502][10002];

int main(){
	int t;
	cin>>t;
	while(t--){
		int val[501];
		int weights[501];
		
		memset(val,0,sizeof(val));
		memset(weights,0,sizeof(weights));
		
		int empty,W,n;
		cin>>empty>>W>>n;
		W=W-empty;
		

		rep(i,n)
			cin>>val[i]>>weights[i];

		rep(i,n+1){
			rep(j,W+1){
				if(i==0)
					K[i][j] = -1;
				else if(j==0)
					K[i][j] = 0;
				else if(weights[i-1]<=j){
					if(K[i][j-weights[i-1]]== -1)
						K[i][j] = K[i-1][j];
					else if(K[i-1][j]==-1)
						K[i][j] =  val[i-1]+K[i][j-weights[i-1]];
					else 
						K[i][j] = min(val[i-1]+K[i][j-weights[i-1]], K[i-1][j]);
				}
				else
					K[i][j]=K[i-1][j];

			}
		}
		if(K[n][W]!=-1)
			cout<<"The minimum amount of money in the piggy-bank is "<<K[n][W]<<"."<<endl;
		else
			cout<<"This is impossible."<<endl;

	}
}