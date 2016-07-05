#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	char mat[n][m];
	memset(mat,'.',sizeof(mat));

	int i=0,j=0,count=1;
	while(i<n){
		if(i%2==0){
			int j=0;
			while(j<m)
				mat[i][j]='#',j++;
		}
		else{
			if(count%2==0)
				mat[i][0] = '#';
			else
				mat[i][m-1]='#';
			count++; 
		}
		i++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<mat[i][j];
		cout<<endl;
	}
}
