#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int val[n];
	int sum=0;
	for(int i=0;i<n;i++)
		cin>>val[i],sum+=val[i];
	sort(val,val+n);

	int i=n-1;
	int cursum=0;
	int count=0;
	while(cursum<=sum/2){
		count++;
		i--;
	}
	cout<<count<<endl;
}