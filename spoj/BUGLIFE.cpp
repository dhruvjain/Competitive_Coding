#include <bits/stdc++.h>

using namespace std;

#define fi(n) scanf("%d",&n)
#define all(v) v.begin(),v.end()
#define tr(vec,it) for(__typeof(vec.begin()) it = vec.begin();it!=vec.end();++it)
#define vi vector<int>
#define vvi vector <vi> 
#define rep(i,a,b) for(__typeof(a) i = (a); i < (b) ; i++)
#define pb push_back
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>

bool visited[2005];
int color[2005];

bool bfs(vvi &graph,int start_vertex){
	bool ans = false;
	visited[start_vertex] = true;
	color[start_vertex] = 1;
	queue<int> Q;
	Q.push(start_vertex);
	while(!Q.empty()){
		int i=Q.front();
		Q.pop();
		for(int j=0;j<graph[i].size();j++){
			int vertex = graph[i][j];
			if(!visited[vertex]){
				visited[vertex] = true;
				color[vertex] = -1* color[i];
				Q.push(vertex);
			}
			else if(color[vertex] == color[i])
				return true;

		}
	}
	return ans;
}

bool dfs(vvi &g, int root,int root_color){
    bool ans = false;
    tr(g[root],itr){
        if(visited[*itr] && color[*itr]==root_color)
            return true;
        else if(!visited[*itr]){
            visited[*itr] = true;
            color[*itr] = 1- root_color;
            ans = ans || dfs(g,*itr,1-root_color);
        }
    }
    return ans;
}

int main(){
	ios::sync_with_stdio(false);
	int t,count = 1;
	cin>>t;
	while(t--){
		int n,e;
		cin>>n>>e;
		vvi graph(n+1);
		memset(visited,0,sizeof(visited));
		rep(i,0,e){
			int u,v;
			cin>>u>>v;
			graph[u].pb(v);
			graph[v].pb(u);
		}
		int bug=false;
		int k=1;
		while(!bug && k<=n){
			if(!visited[k])
				bug = bug || bfs(graph,k);
			
			k++;
		}
		cout<<"Scenario #"<<count<<":\n"<<(bug? "Suspicious bugs found!":"No suspicious bugs found!")<<endl;
		count++;
	}

}