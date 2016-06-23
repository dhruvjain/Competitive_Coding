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
#define MAX_MOD 1000000007


int main(){
	int t;
	cin>>t;

	while(t--){
		string str;
		cin>>str;
		unsigned characters[100] = {0};
		int len,last_occur;
		len = str.size();
		int dp[len+1];
		memset(dp,0,sizeof(dp));
		dp[0] = 1;
		for(int i=1;i<=len;i++){
			last_occur = characters[str[i-1]];

			dp[i] = dp[i-1]<<1;

			if(last_occur)
				dp[i]-= dp[last_occur-1];

			characters[str[i-1]] = i;

			dp[i]-= dp[i]>MAX_MOD ? MAX_MOD:0;
			dp[i] += dp[i]<0 ? MAX_MOD:0;
		}
		cout<<dp[len]<<endl;
	}
}