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


	int a,d,min,min1,min2;

	while(1){

		gi(a);
		gi(d);
		if(a==0 && d==0)
			break;

		int* A=new int[a];
		int* B=new int[d];
		//gi(A[0]);
		min=10000;
		//printf("%d\n",A[0] );
		rep(i,0,a){
			gi(A[i]);
			if(A[i]<min)
				min=A[i];
		}
		//gi(B[0]);
		min1=10000;
		min2=10000;

		rep(i,0,d){
			gi(B[i]);
			if(B[i]<min1){
				min2=min1;
				min1=B[i];
			}
			else if(B[i]<=min2)
				min2=B[i];
		}
		

		if(min>=min2)
			printf("N\n");
		else
			printf("Y\n");







	}









}