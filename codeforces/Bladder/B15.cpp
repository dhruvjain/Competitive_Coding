#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,s,t;
	cin>>n>>s>>t;

	int pos[n];

	for(int i=0;i<n;i++)
		cin>>pos[i];

	int count = 0;

	int ball_pos  = s,flag =0;

	while(1){
			
		if(ball_pos==s && flag==1){
			cout<<-1<<endl;return 0;
		}
		if(ball_pos==t)
			break;
		else
			count++,ball_pos = pos[ball_pos-1],flag=1;
	}
	cout<<count<<endl;


	return 0;

}