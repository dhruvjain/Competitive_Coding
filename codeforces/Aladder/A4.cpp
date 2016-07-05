#include <bits/stdc++.h>

using namespace std;

int main(){

	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		if(a[i]<97)
			a[i] = a[i]-65+97;
		if(b[i]<97)
			b[i] = b[i]-65+97;
	}
	if(a<b)
		cout<<"-1"<<endl;
	else if(a>b)
		cout<<"1"<<endl;
	else
		cout<<"0"<<endl;
}