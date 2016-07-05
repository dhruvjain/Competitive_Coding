#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,d;
	cin>>n>>d;

	int total_time=0;	
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		total_time+=t;
	}
	total_time+=(n-1)*10;

	if(total_time>d)
		cout<<-1<<endl;
	else{
		int ans = (d-total_time)/5 +  (n-1)*2;
		cout<<ans<<endl;
	}
	return 0;
}