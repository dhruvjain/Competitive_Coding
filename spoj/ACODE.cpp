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

int encodings[5002];

int calculate(string str){
	encodings[0] = 1;
	encodings[1] = 1;
	int m = str.size();
	forup(i,1,m){
		int count1 = 0,count2 = 0;
		if(str[i]=='0' && (str[i-1]!='1' && str[i-1]!='2'))
			return 0;
		if( ( (int)(str[i-1]-'0') *10 + (int)(str[i]-'0') ) <= 26 && str[i-1]!='0') {
			count1 = encodings[i-1];
		}
		if(str[i]!='0')
			count2 = encodings[i];
		encodings[i+1] = count1+count2;
	}

	return encodings[m];
}

int main(){
	string n;
	while(cin>>n){
		if(n[0]=='0')
			break;
		memset(encodings,0,5002);
		cout<<calculate(n)<<endl;
	}
}