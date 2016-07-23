// There is nothing in caterpillar that tells you its going to be  a butterfly -----------------------------------  !
#include <bits/stdc++.h>
using namespace std;
#define ll long long unsigned int
#define pb push_back
#define mod 1000000007
#define inf 1e8

#define pi pair<ll,ll>
#define pii pair<pi,ll>
#define f first
#define s second
#define mp make_pair

#define rep(i,n) for(ll i=0;i<n;i++)
#define fr freopen("A-large.in","r",stdin)
#define fo freopen("output.txt","w",stdout)
#define print(cnt,x) cout<<"Case #"<<cnt<<": "<<x<<"\n";
bool rec(ll i,bool sw,ll k){
	if(k==i/2+1){
		if(sw) return 1;
		return 0;
	}

	if(k<=i/2){
		return rec(i/2,sw,k);
	}
	bool cur=rec(i/2,sw^1,i-k+1);
	return cur;
}
int main(){
	fr;
	fo;
	ll t,k;
	cin >> t;
	int cnt=0;
	while(t--){
		cin >> k;
		ll len=0;
		while(len<=k){
			len=2*len+1;
		}
		cnt++;
		print(cnt,rec(len,0,k));
	}
}
