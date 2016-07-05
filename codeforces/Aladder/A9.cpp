#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int input[n];
	int output[n];

	for(int i=0;i<n;i++){
		cin>>input[i];
		output[input[i]-1] = i+1; 
	}

	for(int i=0;i<n;i++)
		printf("%d ",output[i] );

}