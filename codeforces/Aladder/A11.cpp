#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin>>n;
	int mini,maxi;

	int val[n];
	int min_val = 101,max_val=0;
	for(int i=0;i<n;i++){

		cin>>val[i];
		if(val[i]>max_val)
			max_val=val[i],maxi=i;
		if(val[i]<=min_val)
			min_val = val[i],mini = i;
	}
	int ans;
	if(mini>maxi)
		ans = (n-1-mini) + maxi;

	else
		ans = (n-1-mini) + maxi -1;

	cout<<ans<<endl;


}