#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[m];
	for(int i=0;i<m;i++)
		cin>>arr[i];

	sort(arr,arr+m);

	int i=0,j=2;

	if(arr[i]==1 || arr[m-1]==n){
		cout<<"NO"<<endl;
		return 0;
	}
	while(j<m){
		if(arr[j-1]-arr[i]==1 && arr[j]-arr[j-1]==1){
			cout<<"NO"<<endl;
			return 0;
		}
		i++;j++;
	}
	cout<<"YES"<<endl;
	return 0;

}