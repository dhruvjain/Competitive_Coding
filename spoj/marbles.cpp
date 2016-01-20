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
ll nck(int n, int k)
{
   	ll l,m,ans;
   	l=1;
   	if(k>n-k) k = n-k;
    rep(i,0,k){
    		
    	l=l*(n-i)/(i+1);
    	
    }
    
   
    return l;
}
int main(){

	int t;
	int n,k;
	ll ans;
	cin>>t;
	while(t--){

		gi(n);
		gi(k);

		ans=nck(n-1,k-1);

		printf("%lld\n",ans);


	}
	return 0 ;
}

