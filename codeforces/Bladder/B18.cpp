#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int row[m];
	int col[n];
	int B[m][n];
	fill_n(row, m, 1);
	fill_n(col,n,1);
	int rcount=0,ccount=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			cin>>B[i][j];
			if(B[i][j]==0)
				row[i]=0,col[j]=0;
		}
	for(int i=0;i<m;i++)
		if(row[i]==0)
			rcount++;
	for(int i=0;i<n;i++)
		if(col[i]==0)
			ccount++;
		
	if(rcount==m && ccount!=n || ccount==n && rcount!=m){
		cout<<"NO"<<endl;return 0;
	}
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			if(B[i][j]==1 && row[i]==0 && col[j]==0){
				cout<<"NO"<<endl;return 0;
			}
		}
	cout<<"YES"<<endl;
	memset(B,0,sizeof(B));

	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			if(row[i]==1 && col[j]==1)
				B[i][j]=1;
			else
				B[i][j]=0;
		}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;


}