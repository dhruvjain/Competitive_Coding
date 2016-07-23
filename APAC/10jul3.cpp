#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long ll;

#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
// #define tr(c,it) for(typeof((c).begin()) it = (c).begin(); it != (c).end(); it++) 
#define present(c,val) ((c).find(val) != (c).end()) 
#define cpresent(c,val) (find(all(c),val) != (c).end()) 
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define FOR(i, x, y) for(int i= (x); i<= (y); ++i)
#define FORR(i, y, x) for(int i= (y); i>= (x); --i)

#define imax numeric_limits<int>::max()
#define imin numeric_limits<int>::min()
#define lmax numeric_limits<ll>::max()
#define lmin numeric_limits<ll>::min()
#define debug(var) cerr<<#var<<" = "<<(var)<<endl;
#define debugarr(var,n) cerr<<#var<<" = { ";rep(i,n) cerr<<var[i]<<" ";cerr<<"}"<<endl; 
#define debugmat(var,m,n) cerr<<#var<<" = \n";rep(i,m) {rep(j,n) cerr<<var[i][j]<<" ";cerr<<endl;}
#define scani(var) scanf("%d",&(var))
#define scanll(var) scanf("%lld",&(var)) 
#define MOD ((int)1e9+7)
inline bool eq(double d1,double d2) {
	if(abs(d1-d2)<0.00000000001) return true;
	return false;
}

double find(int *arr,int n,double d) {
	double ans=0.0;
	rep(i,n) {
		int coe=n-1-i;
		ans=ans+pow(d,coe)*arr[i];
	}
	return ans; 
}

int main() {
	int t;cin>>t;
	FOR(cs,1,t) {
		double ans;
		int x;cin>>x;
		int arr[x+1];
		rep(i,x+1) cin>>arr[i];arr[0]=-arr[0];
		double d1=find(arr,x+1,0.0),d2=find(arr,x+1,2.0);
		if(eq(d1,0.0)) ans=-1;
		else if(eq(d2,0.0)) ans=1;
		else {
			bool b0=(d1<0);
			double l=0.0,r=2.0,mid;
			while(!eq(l,r)) {
				mid=(l+r)/2;
				if((find(arr,x+1,mid)<0)==b0) l=mid;
				else r=mid; 
			}
			ans=l-1;
		}
		cout<<"Case #"<<cs<<": ";
		printf("%.12lf\n",ans );
	}
	return 0;
}