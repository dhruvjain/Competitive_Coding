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

int mat[100][100001];


int main(){


	int n,t;
	gi(t);

	while(t--){

		gi(n);
		int a[100];

		int max=0;
		rep(i,0,n){
			gi(a[i]);
			max+=a[i];
		}
		memset(mat,0,sizeof(mat));
		
		mat[0][a[0]]=1;
		
        
		rep(i,1,n){
			mat[i][a[i]]=1;
			
			rep(j,0,max+1){

				if(mat[i-1][j]==1){
						mat[i][j]=1;
						if(a[i]+j<100001)
							mat[i][a[i]+j]=1;

				}
				
			}

		}

	   long long int res=0;

		rep(i,0,100001){
			if(mat[n-1][i]==1){
				res+=i;

			}
		}

		cout<<res<<endl;



	}






}