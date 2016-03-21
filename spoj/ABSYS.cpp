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

int contains(string str){

	int i=0;
	int m = str.size();
	while(i<m-6){
		if(str.substr(i,7)=="machula")
			return true;
		i++;
	}
	return false;
}

int main(){
	int t;
	gi(t);
	while(t--){
		string str1,str2,str3,str4,str5;
		cin>>str1>>str2>>str3>>str4>>str5;
		int a = atoi (str1.c_str());
		int b = atoi (str3.c_str());
		int c = atoi (str5.c_str());
		if(contains(str1)){
			cout<<c-b<<" + "<<b<<" = "<<c<<endl;
		}
		else if(contains(str3)){
			cout<<a<<" + "<<c-a<<" = "<<c<<endl;
		}
		else if(contains(str5)){
			cout<<a<<" + "<<b<<" = "<<a+b<<endl;
		}
	}
}