#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,c;
	cin>>n>>c;
	int rasp = 0;
	int arr[n];
	cin>>arr[0];
	for(int i=1;i<n;i++){
		cin>>arr[i];
		if(arr[i]<arr[i-1] && rasp< arr[i-1]-arr[i]-c)
			rasp = arr[i-1]-arr[i]-c;
	}
	cout<<rasp<<endl;
	return 0;
}