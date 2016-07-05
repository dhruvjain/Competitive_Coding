#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	int guest[101];
	memset(guest,0,sizeof(guest));

	cin>>n;
	int home_color[n];
	memset(home_color,0,sizeof(home_color));

	for(int i=0;i<n;i++){
		int hc,gc;
		cin>>hc>>gc;
		home_color[i] = hc;
		guest[gc]++;
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		ans+= guest[home_color[i]];
	}
	cout<<ans<<endl;

}