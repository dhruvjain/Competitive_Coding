#include <bits/stdc++.h>

using namespace std;

int home[100001];

int main(){
	memset(home,0,sizeof(home));
	int n;
	cin>>n;
	pair<int,int> info[n];
	pair<int,int> output[n];
	memset(output,0,sizeof(output));
	for(int i=0;i<n;i++)
		cin>>info[i].first>>info[i].second,home[info[i].first]++;

	for(int i=0;i<n;i++){
		int extra = home[info[i].second];
		cout<<n-1+extra<<" "<<n-1-extra<<endl;
	}

}