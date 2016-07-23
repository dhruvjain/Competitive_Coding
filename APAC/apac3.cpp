#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;

	int cnt=0;
	while(t--){
		int n,m;
		cin>>n>>m;

		int mat[n][m];
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>mat[i][j];

		for(int i=1;i<n-1;i++)
			for(int j=1;j<n-1;j++){
				int arr={mat[i-1][j],mat[i+1][j],mat[i][j-1],mat[i][j+1]};
				findmin(arr);
				findmax(arr);
			}
	}

}