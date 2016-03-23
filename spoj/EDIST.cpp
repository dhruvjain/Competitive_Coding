#include <bits/stdc++.h>

using namespace std;

int MIN(int a,int b,int c){
	return a<b?(a<c?a:c):(b<c?b:c);
}

int main(){
	int t;
	cin>>t;
	static int editdist[2101][2101];
	while(t--){
		string s1,s2;

		cin>>s1;
		cin>>s2;
		int n=s1.length(),m=s2.length();
		memset(editdist,0,sizeof(editdist));
		for(int i=0;i<=n;i++){	

			for(int j=0;j<=m;j++){
				if(i==0)
					editdist[i][j]=j;
				else if(j==0)
					editdist[i][j]=i;
				else {
					int er=s1[i-1]==s2[j-1]?0:1;
					editdist[i][j]=MIN(editdist[i-1][j-1] +er,editdist[i-1][j]+1,editdist[i][j-1]+1);
			
				}
			}
		}
		cout<<editdist[n][m]<<endl;

	}
}