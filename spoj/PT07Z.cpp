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

int N;
vvi G;
vi visited;
vi dist;
void add_edge(int u,int v){

	G[u].push_back(v);
	G[v].push_back(u);
	
}

void bfs(int start_vertex){
	visited[start_vertex] = true;
	queue<int> Q;
	Q.push(start_vertex);
	dist[start_vertex] = 0;
	while(!Q.empty()){
		int i= Q.front();
		Q.pop();
		for(int j=0; j < G[i].size(); j++){

			int vertex = G[i][j];
   			if(!visited[vertex]){
   				visited[vertex] = true;
   				Q.push(vertex);
   				dist[vertex] = dist[i]+1;
   			}
		}
	}
}

int getmax_dist_vertex(vector<int>& v){
	int max = v[1];
	int max_ind = 1;
	for(int i=2;i<v.size();i++){
		if(v[i]>max)
			max = v[i],max_ind=i;
	}
	return max_ind;
}
int getmax_dist(std::vector<int>& v){
	int max = v[1];
	
	for(int i=2;i<v.size();i++){
		if(v[i]>max)
			max = v[i];
	}
	return max;
}
int main(){
	int n,e;
	cin>>n;
	e=n-1;
	G.reserve(10002);
	for(int i=0;i<e;i++){
		int u,v;
		cin>>u>>v;
		add_edge(u,v);
	}
	visited = vi(n+1,false);
	dist = vi(n+1,0);
	bfs(1);
	int max_vertex=getmax_dist_vertex(dist);

	visited = vi(n+1,false);
	dist = vi(n+1,0);
	bfs(max_vertex);
	cout<<getmax_dist(dist)<<endl;
}