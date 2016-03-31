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
	map<string,int> seq_count;
	seq_count["TTT"]=seq_count["TTH"]=seq_count["THT"]=seq_count["THH"]=seq_count["HTT"]=seq_count["HTH"]=0;
	seq_count["HHT"]=seq_count["HHH"]=0;
	int p;
	cin>>p;
	while(p--){
		int x;
		cin>>x;
		string seq;
		cin>>seq;
		int len=seq.size();
		for(int i=2;i<len;i++){
			seq_count[seq.substr(i-2,3)]++;
		}
		cout<<x<<" "<<seq_count["TTT"]<<" "<<seq_count["TTH"]<<" "<<seq_count["THT"]<<" "<<seq_count["THH"]<<" "<<seq_count["HTT"]<<" "<<seq_count["HTH"]<<" ";
		cout<<seq_count["HHT"]<<" "<<seq_count["HHH"]<<endl;
		seq_count.clear();
	}
}