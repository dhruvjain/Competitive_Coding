#include <bits/stdc++.h>

using namespace std;

int main(){

	string str,output = "";
	cin>>str;
	int i=0;
	int len = str.size(),flag=0;

	while(i<len){

		if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
			if(!flag){
				output+=" ",flag=1;
			}

			i+=3;
		}
		else{
		output += str[i];	i++; flag=0;
		}
		
		
	}
	cout<<output<<endl;

	return 0;

}