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

	while(1){
		int n1,n2;
		cin>>n1;
		
		if(n1==0)
			break;
		int arr1[n1];

		rep(i,n1)
			cin>>arr1[i];
		cin>>n2;
		int arr2[n2];
		rep(i,n2)
			cin>>arr2[i];

		int l=0,m=0,s1=arr1[0],s2=arr2[0],ans=0;
		while(l<n1 && m<n2){

			if(arr1[l]<arr2[m])
				l++, s1 += (l<n1?arr1[l]:0);
			else if(arr1[l]>arr2[m])
				m++, s2+= (m<n2?arr2[m]:0);
			else
				ans = s1>s2?s1:s2 , s1=s2=ans, l++,m++, s1 += (l<n1?arr1[l]:0), s2+= (m<n2?arr2[m]:0);  

		}
		ans = s1>s2?s1:s2;
		l++;m++;
		while(l<n1){
			s1+=arr1[l];
			if(s1>ans)
				ans=s1;
			l++;
		}
		while(m<n2){
			s2+=arr2[m];
			if(s2>ans)
				ans=s2;
			m++;
		}
		cout<<ans<<endl;

	}
}