#include <bits/stdc++.h>

using namespace std;
#define all(v) v.begin(),v.end()
vector< vector<int> > G;
vector<int> visited;
int cycle = 0;
void add_edge(int u,int v){

	G[u].push_back(v);
	//W[v].pb(u);
}
void dfs(int i){
	if(!visited[i]){
		visited[i] = true;	
		for_each(all(G[i]),dfs);
	}
	else
		cycle=1;
}

int main(){
	int n,e;
	cin>>n>>e;
	G.reserve(10002);
	
	for(int i=0;i<e;i++){
		int u,v;
		cin>>u>>v;
		add_edge(u,v);
	}
	
	visited = vector<int> (n+1,false);
	dfs(1);
	int vi=1;
	for(int i=1;i<n+1;i++){
		if(!visited[i])
			vi=0;
	}
	if(cycle || !vi)
		printf("NO\n");
	else if(vi)
		printf("YES\n");
}