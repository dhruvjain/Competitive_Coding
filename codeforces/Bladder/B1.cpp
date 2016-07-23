#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	string str;
	cin>>str;
	int k=0;
	while(k<t){
		
		int i=0;
		while(i<n-1){

			if(str[i]=='B' && str[i+1]=='G'){
				str[i]='G';str[i+1]='B';
				i+=2;
			}
			else 
				i++;
			
		}
		k++;
	}
	cout<<str<<endl;

}