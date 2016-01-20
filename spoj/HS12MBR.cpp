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

int main(){
	int t,n,x,y,r,x1,x2,y1,y2;
	gi(t);

	while(t--){
		int minx=1000,miny=1000,maxx=-1000,maxy=-1000;
		gi(n);
		for(int i=0;i<n;i++){

			char opt;
			scanf("%*[ \n\t]%c",&opt);
			//scanf(" %c",&opt);
			//printf("%c\n",opt );
			switch(opt){
				case 'p':
					gi(x);
					gi(y);
					if(x<minx)
						minx = x;
					if(x>maxx)
						maxx = x;
					if(y<miny)
						miny = y;
					if(y>maxy)
						maxy = y;
					break;
				case 'c':
					scanf("%d %d %d",&x,&y,&r);
					if(x-r <minx)
						minx = x-r;
					if(x+r>maxx)
						maxx = x+r;
					if(y-r<miny)
						miny = y-r;
					if(y+r>maxy)
						maxy = y+r;
					break;
				case 'l':
					//printf("case l\n");
					scanf(" %d %d %d %d",&x1,&y1,&x2,&y2);
					if(min(x1,x2) <minx)
						minx = min(x1,x2);
					if(max(x1,x2)>maxx)
						maxx = max(x1,x2);
					if(min(y1,y2)<miny)
						miny = min(y1,y2);
					if( max(y1,y2) >maxy)
						maxy = max(y1,y2);
					

			}
		}
		pis(minx);pis(miny);pis(maxx);pin(maxy);
	}
}