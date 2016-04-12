#include <bits/stdc++.h>

using namespace std;


int dp[2001][2001];
int treats[2001];
int N;

int computemaxrev(int i,int j){

	if(i>j)
		return 0;
	if(dp[i][j]!=-1)
		return dp[i][j];
	int age = N-j+i;

	dp[i][j]=max(treats[i]*age+computemaxrev(i+1,j), treats[j]*age + computemaxrev(i,j-1));

}

int main(){


	memset(treats,0,sizeof(treats));
	memset(dp,-1,sizeof(dp));
	cin>>N;
	for(int i=0;i<N;i++)
		cin>>treats[i];
	cout<<computemaxrev(0,N-1);
	return 0;
}