#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair <int,int> pii;
typedef vector <int> vi;
 
#define rep(i, n) for(int i = 0; i < (n); ++i)
 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define mset(a, v) memset(a, v, sizeof(a))
#define sz(a) ((int)a.size())
 
#define dbn cerr << "\n"
#define dbg(x) cerr << #x << " : " << (x) << " "
#define dbs(x) cerr << (x) << " "

int main(){
	long long n;
	cin>>n;
	if(n<=1 || (n & (n-1))==0)
		printf("TAK");
	else
		printf("NIE");
}