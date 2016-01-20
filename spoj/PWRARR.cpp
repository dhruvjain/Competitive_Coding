#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <utility>
#include <sstream>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <string.h>
#include <assert.h>
using namespace std;
 
#define ll long long int
typedef vector<int> vi;
typedef pair<int,int> pii;
 
#define sz size
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define rev(i,a,b) for(int i=(a);i>=(b);i--)
#define debug(x) cerr << #x << " " << x << "\n"

#define gi(n) scanf("%d",&n)

int main(){

	ll t;
	ll n;
	ll arr[50001];
	ll ans;
	cin>>t;
	while(t--){

		cin>>n;
		memset(arr,0,50001);
		for(ll i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
	
		ll i=0,j=0;
		ans=0;
		while (i<n){
			ll count=0;

			while(j<n && arr[j]==arr[i]){
				count++;
				j++;

			}
			// cout<<"count ="<<count<<endl;
			ans+=(i+count)*count;
			// cout<<ans<<endl;
			i=j;
		}
		printf("%lld\n",ans ); 

	}
	return 0 ;
}

