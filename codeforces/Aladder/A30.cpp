#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,num;
	cin>>n>>k;
	int count=0;
	for(int i=0;i<n;i++){
		cin>>num;
		if(num<=5-k)
			count++;
	}
	cout<<count/3<<endl;
	return 0;
}