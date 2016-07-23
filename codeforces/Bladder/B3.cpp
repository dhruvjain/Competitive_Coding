#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,m,k;

	cin>>n>>m>>k;
	
	int arr[m+1];
	for(int i=0;i<=m;i++)
		cin>>arr[i];
	int friends = 0;
	for(int i=0;i<m;i++){
		int numxor = arr[m]^arr[i];
		bitset<20> foo(numxor);
		int count = foo.count();
		if(count<=k)
			friends++;	
	}
	cout<<friends<<endl;

}