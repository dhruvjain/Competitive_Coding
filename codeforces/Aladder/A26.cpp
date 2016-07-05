#include <bits/stdc++.h>

using namespace std;

int minimum(int a,int b,int c){

	return a<b ? (a<c?a:c) : (b<c?b:c);
}

int main(){
	int n;
	cin>>n;
	queue<int> q1,q2,q3;

	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		if(num==1)
			q1.push(i+1);
		else if(num==2)
			q2.push(i+1);
		else
			q3.push(i+1);
	}
	
	if(q1.size() && q2.size() && q3.size()){
		cout<<minimum(q1.size(),q2.size(),q3.size())<<endl;
	}
	else
		cout<<0<<endl;

	while(!q1.empty() && !q2.empty() && !q3.empty()){
		cout<<q1.front()<<" "<<q2.front()<<" "<<q3.front()<<endl;
		q1.pop();q2.pop();q3.pop();
	}
	return 0;
}