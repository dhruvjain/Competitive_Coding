#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	char mat[n][n];
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		for(int j=0;j<n;j++)
			mat[i][j]=str[j];
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int count = 0;
			if(i-1>=0 && mat[i-1][j]=='o')
				count++;
			if(j-1>=0 && mat[i][j-1]=='o')
				count++;  
			if(i+1<n && mat[i+1][j]=='o')
				count++;
			if(j+1<n && mat[i][j+1]=='o')
				count++;
			if(count%2!=0){
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;
}