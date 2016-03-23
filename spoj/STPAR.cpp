#include <bits/stdc++.h>

using namespace std;

int main(){
	
	while(1){
		int n;
		stack<int> st;
		cin>>n;
		if(n==0)
			break;
		int exp_no=1,x;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x==exp_no)
				exp_no++;
			else{
				while(!st.empty() && st.top()==exp_no)
					st.pop(),exp_no++;
				st.push(x);
			}
		}
		while(!st.empty()){
			int num = st.top();
			if(num==exp_no)
				st.pop(),exp_no++;
			else
				break;
		}
		if(st.empty())
			printf("yes\n");
		else
			printf("no\n");
	}
}