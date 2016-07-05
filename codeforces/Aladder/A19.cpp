#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n;

	int values[n];
	memset(values,0,sizeof(values));

	cin>>m;
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		values[a-1]++;
	}
	cin>>m;
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		values[a-1]++;
	}
	for(int i=0;i<n;i++)
		if(values[i]==0){
			cout<<"Oh, my keyboard!"<<endl;return 0;
		}

	cout<<"I become the guy."<<endl;
	return 0;
}