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
	int t;
	cin>>t;

	while(t--){
		int ng,mg;
		cin>>ng;
		cin>>mg;
		int max_ng=-1,max_mg=-1;
		rep(i,ng){
			int strength;
			cin>>strength;
			if(strength>max_ng)
				max_ng=strength;
		}
		rep(i,mg){
			int strength;
			cin>>strength;
			if(strength>max_mg)
				max_mg=strength;
		}
		if(max_ng>=max_mg)
			printf("Godzilla\n");
		else 
			printf("MechaGodzilla\n");

	}
}