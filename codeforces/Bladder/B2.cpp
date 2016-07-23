#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n,m;
	cin>>n>>m;
	long long initial = 1,count=0,i;
	for(i=0;i<m;i++){
		long long num;
		cin>>num;
		if(num>initial)
			count+= (num-initial);
		else if(num<initial)
			count+=(n-initial+num);
		initial=num;
	}
	cout<<count<<endl;
}