#include <bits/stdc++.h>

using namespace std;

int main(){
	string input;
	cin>>input;
	int len = input.size();
	int count1=0,count2=0,count3=0;
	for(int i=0;i<len;i++){
		if(input[i]=='1')
			count1++;
		else if(input[i]=='2')
			count2++;
		else
			count3++;
	}
	int i=0;
	string output;
	while(i<len){
		if(i%2==0){
			if(count1)
				output+="1",count1--;
			else if(count2)
				output+="2",count2--;
			else if(count3)
				output+="3",count3--;
		}
		else
			output += "+";
		i++;
	}
	cout<<output<<endl;
		

}