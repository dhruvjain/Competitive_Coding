#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <string>
#include <cassert>

using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef pair<int,pii> edge;

#define forup(i,a,b) for(int i=a; i<b; ++i)
#define fordn(i,a,b) for(int i=a; i>b; --i)
#define rep(i,a) for(int i=0; i<a; ++i)

#define dforup(i,a,b) for(i=a; i<b; ++i)
#define dfordn(i,a,b) for(i=a; i>b; --i)
#define drep(i,a) for(i=0; i<a; ++i)

#define slenn(s,n) for(n=0; s[n]!=13 and s[n]!=0; ++n);s[n]=0

#define gi(x) scanf("%d",&x) // get int
#define gl(x) cin>>x // get long 
#define gd(x) scanf("%lf",&x) // scan double
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

void print_one_cut(int space,int dia_size,int rev){
	int dots = 2*(dia_size - space);
	int star = 2*space - 2;
	rep(i,dots/2)
		printf(".");
	if(rev)
		printf("\\");
	else
		printf("/");
	rep(i,star)
		printf("*");
	if(rev)
		printf("/");
	else
		printf("\\");
	rep(i,dots/2)
		printf(".");
}

void print_diamond(int dia_size){
	rep(i,dia_size)
		print_one_cut(i+1,dia_size,0);
	fordn(i,dia_size,0)
		print_one_cut(i,dia_size,1);
}

int main(){
	int t;
	gi(t);
	while(t--){
		int r,c,s;
		gi(r),gi(c),gi(s);
		rep(i,r){
			rep(j,s){
				rep(k,c){
					print_one_cut(j+1,s,0);
				}
				pnl();
			}
			fordn(j,s,0){
				rep(k,c){
					print_one_cut(j,s,1);
				}
				pnl();
			}
		}
		pnl();
	}
	
}