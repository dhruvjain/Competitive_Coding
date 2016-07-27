#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,s;
	cin>>m>>s;
	int i=0;
	int j=m,dig_sum1=s,dig_sum2=s;
	queue<int> Q1,Q2;
	if(m==1 && s==0){
		cout<<"0 0"<<endl;return 0;
	}
	while(i<m){
		if((j==m && dig_sum1<1) || dig_sum1>9*j){
			cout<<"-1 -1"<<endl;
			return 0;
		}
		if((j==m && dig_sum2<1) || dig_sum2>9*j){
			cout<<"-1 -1"<<endl;
			return 0;
		}
		int digit = i==0?1:0;

		for(;digit<=9;digit++){
			if(dig_sum1-digit<=9*(j-1) && dig_sum1-digit>=0)
				break;
		}

		int digit2 = 9;

		for(digit2=9;digit2>=0;digit2--){
			if(dig_sum2-digit2<=9*(j-1) && dig_sum2-digit2>=0)
				break;
		}

		Q1.push(digit);
		Q2.push(digit2);
		dig_sum1-=digit;
		dig_sum2-=digit2;
		j--;
		i++;
	}

	int num=1,min_num=0,max_num=0;
	while(!Q1.empty()){
		int a=Q1.front();
		cout<<a;
		Q1.pop();
	}
	cout<<" ";
	while(!Q2.empty()){
		int a=Q2.front();
		cout<<a;
		Q2.pop();
	}
	cout<<endl;

}