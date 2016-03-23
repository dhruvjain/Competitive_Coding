#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int arr[1001];
	int count=0;
	while(t--){
		count++;
		int target,n;
		cin>>target;
		cin>>n;
		memset(arr,0,sizeof(arr));
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		int j=n-1;
		int sum=0;
		while(j>=0 && sum<target)
			sum+=arr[j],j--;
		if(sum>=target)
			cout<<"Scenario #"<<count<<":"<<endl<<n-1-j<<endl;
		else
			cout<<"Scenario #"<<count<<":"<<endl<<"impossible"<<endl;
	}
}