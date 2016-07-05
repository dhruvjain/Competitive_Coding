#include <bits/stdc++.h>

using namespace std;

int main(){
	int r,c;
	cin>>r>>c;
	char mat[r][c];
	int col[c],row[r];
	memset(col,0,sizeof(col));
	memset(row,0,sizeof(row));

	for(int i=0;i<r;i++){
		string str;
		cin>>str;
		for(int j=0;j<c;j++){
			mat[i][j]=str[j];
			if(str[j]=='S')
				col[j]=1,row[i]=1;
		}
	}
	int count=0;
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++){
			if(col[j]==0 || row[i]==0)
				count++;
		}
	cout<<count<<endl;
	return 0;

}