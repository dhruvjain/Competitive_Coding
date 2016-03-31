#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef pair<int,pii> edge;

#define tr(vec,it) for(__typeof(vec.begin()) it = vec.begin();it!=vec.end();++it)
#define forup(i,a,b) for(int i=a; i<b; ++i)
#define fordn(i,a,b) for(int i=a; i>b; --i)
#define rep(i,a) for(int i=0; i<a; ++i)
#define rep2(i,a,b) for(__typeof(a) i = (a); i < (b) ; i++)

#define dforup(i,a,b) for(i=a; i<b; ++i)
#define dfordn(i,a,b) for(i=a; i>b; --i)
#define drep(i,a) for(i=0; i<a; ++i)

#define slenn(s,n) for(n=0; s[n]!=13 and s[n]!=0; ++n);s[n]=0

#define gi(x) scanf("%d",&x) // get int
#define gl(x) cin>>x // get long 
#define gd(x) scanf("%lf",&x) // scan int
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
int mat[200][200];
int N,M;
// int bfs(int i,int j){
// 	queue< pii > Q;
// 	map<pii,int> visited;

// 	Q.push(mp(i,j));
// 	visited[mp(i,j)]=1;
// 	int dist = 0;

// 	while(!Q.empty()){

// 		int levelnodes = Q.size();
// 		while(levelnodes){
// 			pii p = Q.front();
// 			i = p.first;j=p.second;
// 			if(mat[i][j]==1)
// 				return dist;
// 			Q.pop();
// 			if(j>0 && !visited[mp(i,j-1)]){
// 				Q.push(mp(i,j-1));
// 				visited[mp(i,j-1)]=1;
// 			}
// 			if(j<M-1 && !visited[mp(i,j+1)]){
// 				Q.push(mp(i,j+1));
// 				visited[mp(i,j+1)]=1;
// 			}
// 			if(i<N-1 && !visited[mp(i+1,j)]){
// 				Q.push(mp(i+1,j));
// 				visited[mp(i+1,j)]=1;
// 			}
// 			levelnodes--;
// 		}
// 		dist++;
// 	}
// }

int BFS(int i,int j){
	queue< pii > Q;
	Q.push(mp(i,j));
	mat[i][j]=0;

	while(!Q.empty()){
		pii p = Q.front();
		int i = p.first;
		int j = p.second;
		Q.pop();
		int dist = mat[i][j] + 1;
		if(i>0 && dist<mat[i-1][j]){
			mat[i-1][j] = dist;
			Q.push(mp(i-1,j));
		}
		if(i<N-1 && dist < mat[i+1][j]){
			mat[i+1][j] = dist;
			Q.push(mp(i+1,j));
		}
		if(j>0 && dist < mat[i][j-1]){
			mat[i][j-1] = dist;
			Q.push(mp(i,j-1));
		}
		if(j<M-1 && dist < mat[i][j+1]){
			mat[i][j+1] = dist;
			Q.push(mp(i,j+1));
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		N=n;M=m;
		memset(mat,0,sizeof(mat));
		vector<pii> vc;
		rep(i,n){
			string str;
			cin>>str;
			rep(j,m){
				mat[i][j]=str[j]-'0';
				if(mat[i][j]==0)
					mat[i][j]=INT_MAX;
				else
					mat[i][j]=-INT_MAX,vc.push_back(mp(i,j));
			}
		}
		tr(vc,it){
			BFS((*it).first,(*it).second);
		}
		// // cout<<bfs(0,0);
		rep(i,n){
			rep(j,m)
				cout<<mat[i][j]<<" ";
			cout<<endl;
		}
	}
	return 0;
}