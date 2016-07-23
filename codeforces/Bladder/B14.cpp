#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,prev_height = 0, ans = 0, cur_height;

	cin>>n;
	cin>>cur_height;
	ans += (cur_height+1);
	prev_height = cur_height;
	for(int i=1;i<n;i++){
		cin>>cur_height;
		if(cur_height>prev_height){
			ans += (cur_height - prev_height +2);
			prev_height = cur_height;
		}
		else{
			ans += (prev_height- cur_height + 2);
			prev_height = cur_height;
		}
	}
	cout<<ans<<endl;

}