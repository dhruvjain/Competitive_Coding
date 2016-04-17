#include <bits/stdc++.h>
using namespace std;

int dp[6110][6110];

int coutpalin(string str){

	int n=str.size();

	for(int gap=1;gap<n;gap++){
		for(int l=0,h=gap;h<n;l++,h++)
			dp[l][h] = (str[l]==str[h])? dp[l+1][h-1]: (min(dp[l][h-1],dp[l+1][h]) +1); 
	}
	return dp[0][n-1];
	// if(i>=j)
	// 	return 0;

	// if(dp[i][j]!=-1)
	// 	return dp[i][j];

	// if(str[i]==str[j])
	// 	dp[i][j] = coutpalin(str,i+1,j-1);

	// else
	// 	dp[i][j] = 1+ min(coutpalin(str,i+1,j),coutpalin(str,i,j-1));

	// return dp[i][j];
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		memset(dp,-1,sizeof(dp));
		cout<<coutpalin(str)<<endl;
	}
}