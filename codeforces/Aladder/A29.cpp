#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int count_even=0,count_odd=0,ieven,iodd;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		if(num%2==0)
			count_even++,ieven=i+1;
		else
			count_odd++,iodd=i+1;
	}
	if(count_odd==1)
		cout<<iodd<<endl;
	else
		cout<<ieven<<endl;
}