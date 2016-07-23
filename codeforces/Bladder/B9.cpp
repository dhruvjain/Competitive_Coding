#include <bits/stdc++.h>

using namespace std;

int main(){

	string str;

	cin>>str;
	long long int len = str.size();
	int last_digit =  str[len-1]-'0';

	int i=0,previous_pos = -1;
	string ans = "-1";

	while(i<len-1){
		if((str[i]-'0')%2==0 && (str[i]-'0')<last_digit ){
			char temp=str[i];
			str[i] = str[len-1];
			str[len-1] = temp;
			cout<<str<<endl;
			return 0;
		}
		else if((str[i]-'0')%2==0)
			previous_pos = i;
		i++;
	}
	if(previous_pos!=-1){
		i=previous_pos;
		char temp=str[i];
		str[i] = str[len-1];
		str[len-1] = temp;
		cout<<str<<endl;
	}
	else
		cout<<ans<<endl;

}