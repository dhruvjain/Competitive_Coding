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

int main(){

	ios::sync_with_stdio(false);

	long long int n;
	while(1){
		cin>>n;
		if(n==0)
			return 0;
		int hist[n];
		long long int max_area = 0;
		stack<long long int> s;
		memset(hist,0,sizeof(hist));
		rep(i,n)
			cin>>hist[i];
		long long int i=0;
		while(i<n){
			if(s.empty() || hist[s.top()]<=hist[i])
				s.push(i++);
			else{
				long long int tp = s.top();
				s.pop();

				long long int area = hist[tp]* (s.empty() ? i : ( i-s.top()-1) );
				if(max_area<area)
					max_area = area;
			}
		}

		while(!s.empty()){
			long long int tp = s.top();
			s.pop();
			long long int area = hist[tp] * (s.empty() ? i : (i-s.top()-1));
			if(max_area<area)
				max_area = area;

		}
		cout<<max_area<<endl;

	}
}