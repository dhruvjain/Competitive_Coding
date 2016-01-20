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
#include<time.h>
#include <unistd.h>

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

	
	int ans[100001];
	int t,n;

	gi(t);

	while(t--){

		gi(n);
		int a[101];
		memset(a,0,sizeof(a));
		rep(i,0,n){
			gi(a[i]);
		}
		
		sort(a,a+n);

		memset(ans,0,sizeof(ans));

		ans[a[0]]=1;
		int lastindex;
		int index=a[0];
		//printf("%d\n",a[0] );

		rep(i,1,n){
			if(ans[a[i]]!=1){
				ans[a[i]]=1;
			//printf("%d\n",a[i] );
			//cout<<"index is "<<index<<endl;
			rep(j,0,index+1){
				if(j==a[i])
					continue;
				else if(ans[j]==1){
					//printf("ok %d\n",j );
					ans[a[i]+j]=1;
					lastindex=a[i]+j;

				}
			}
			index=lastindex;
		}

		else{
				//cout<<"index is "<<index<<endl;
			rep(j,0,index+1){
				
				if(ans[j]==1){
					//printf("ok %d\n",j );
					ans[a[i]+j]=1;
					lastindex=a[i]+j;

				}
			}
			index=lastindex;

		}
	}

	
		int res=0;
		rep(i,0,100001){
			if(ans[i]==1){
				res+=i;

			}

		}
		printf("%d\n",res );

	



	}







}