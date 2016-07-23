#include <bits/stdc++.h>

using namespace std;

int main(){
	int mat[3][3];

	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			cin>>mat[i][j];

	int c= mat[0][1]+mat[0][2];
	int a = mat[1][0]+mat[1][2]-c;
	int b = mat[2][0]+mat[2][1]-mat[1][0]-mat[1][2]  ;
	mat[1][1] = (b+c)/2;
	mat[2][2] = mat[1][1]-b;
	mat[0][0] = mat[1][1]+a;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}

}