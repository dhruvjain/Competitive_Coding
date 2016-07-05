#include <bits/stdc++.h>

using namespace std;

int main(){
	string input;
	cin>>input;
	int len = input.size();
	string output="";
	for(int i=0;i<len;i++){
		if(input[i]<97)
			input[i]=input[i]-65+97;
		if(input[i]!='a' && input[i]!='e' && input[i]!='i' && input[i]!='o' && input[i]!='u' && input[i]!='y'){
			string temp = "."+string(1,input[i]);
			output+=temp;
		}
	}
	cout<<output<<endl;

}