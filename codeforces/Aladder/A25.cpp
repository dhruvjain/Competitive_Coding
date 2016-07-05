#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;

	cin>>n>>m;
	int min_step = 100000;
	for(int i=0;i<=n/2;i++)
		for(int j=0;j<=n;j++){
			int num = 2*i+j;
			if(num==n && (i+j)%m==0 && (i+j)<min_step)
				min_step = i+j;
		}
	if(min_step!=100000)
		cout<<min_step<<endl;
	else
		cout<<-1<<endl;
	return 0;
}