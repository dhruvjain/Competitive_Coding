#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	while(scanf("%d",&n)!=EOF){
		
				
		int smoke[105][105];
		int color[105][105];
		memset(smoke,0,sizeof(smoke));
		memset(color,0,sizeof(color));
		for(int i=0;i<n;i++){
			cin>>color[i][i];
			
		}
		
		for(int L=2;L<=n;L++){
			for(int i=0;i<n-L+1;i++){
				int j=i+L-1;

				smoke[i][j]=INT_MAX;
				for(int k=i;k<=j-1;k++){
					int q=smoke[i][k]+smoke[k+1][j]+color[i][k]*color[k+1][j];
					if(q<smoke[i][j]){
						smoke[i][j] = q;
						color[i][j] = (color[i][k]+color[k+1][j])%100;
					}
				}
			}
		}
		cout<<smoke[0][n-1]<<endl;


	}
}