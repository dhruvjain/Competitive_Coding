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

void findmax(int arr[],int start,int end,int& maximum,int& max_index){
	maximum=arr[start];
	max_index=start;
	for(int i=start;i<=end;i++)
		if(arr[i]>maximum)
			maximum=arr[i],max_index=i;
	
}

int main(){
	ios::sync_with_stdio(false);
	long long n,k;
	cin>>n;
	int arr[n];
	rep(i,n)
		cin>>arr[i];
	cin>>k;
	int output[n-k+1];
	int maximum=arr[0], max_index=0;
	rep(i,k){
		if(arr[i]>maximum)
			maximum = arr[i],max_index = i;
	}
	int ind = 0;
	output[ind++]=maximum;
	int i = k,j=1;

	while(i<n){
		if(arr[i]>maximum && max_index>=j)
			maximum = arr[i],max_index=i,i++,j++,output[ind++]=maximum;
		else if(max_index>=j)
			output[ind++]=maximum,i++,j++;
		else 
			findmax(arr,j,i,maximum,max_index),output[ind++]=maximum,i++,j++;
	}
	rep(i,n-k+1)
		cout<<output[i]<<" ";
	cout<<endl;
	
}