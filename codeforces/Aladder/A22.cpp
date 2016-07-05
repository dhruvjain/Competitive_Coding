#include <bits/stdc++.h>

using namespace std;

int maximum(int a,int b,int c){

	return a>b? (a>c?a:c) : (b>c?b:c);
}

int main(){
	string str;
	cin>>str;
	int len = str.size();

	int val1=stoi(str);
	int val2 = stoi(str.substr(0,len-1));
	string temp = str.substr(0,len-2);
	temp = temp + str[len-1];
	int val3 = stoi(temp);
	cout<<maximum(val1,val2,val3)<<endl;

}