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
	map<int,string> binary_rep;
	binary_rep[1]="2(0)";
	binary_rep[2] = "2";
	binary_rep[3] = binary_rep[2] +"+"+binary_rep[1];
	for(int i=4;i<=16385;i++){
		int num = i;
		string res;
		if((num & (num-1))==0 ){
			int sub_num = log2(num);
			res = "2(" + binary_rep[sub_num]+ ")";
		}
		else{
			while(num){
				int sub_num = log2(num);
				int near_num = 1<<sub_num;
				res = res +"+"+ binary_rep[near_num];
				num = num - (1<<sub_num );
			}
			res=res.substr(1);
		}
		binary_rep[i]=res;
	}
	cout<<137<<"="<<binary_rep[137]<<endl;
	cout<<1315<<"="<<binary_rep[1315]<<endl;
	cout<<73<<"="<<binary_rep[73]<<endl;
	cout<<136<<"="<<binary_rep[136]<<endl;
	cout<<255<<"="<<binary_rep[255]<<endl;
	cout<<1384<<"="<<binary_rep[1384]<<endl;
	cout<<16385<<"="<<binary_rep[16385]<<endl;
	
}