#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int i=1;
	int count = 0;
	while(i<n && arr[i]>=arr[i-1])
		i++;

	if(i==n){
		cout<<count<<endl;
		return 0;
	}
	
	int max_num = arr[i-1];
	int init = i;
	i++;
	while(i<n && arr[i]>=arr[i-1])
		i++;
	if(i==n && arr[n-1]<=arr[0])
		cout<<n-init<<endl;
	else
		cout<<-1<<endl;

	return 0;
}