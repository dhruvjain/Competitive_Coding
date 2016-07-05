#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int len=str.size();
		if(len<=10)
			cout<<str<<endl;
		else{
			int num = len-2;

			string output = str[0]+to_string(num)+str[len-1];
			cout<<output<<endl;
		}
	}
}