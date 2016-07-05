#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;

	cin>>n>>m;

	int bada = max(n,m);
	int chota = min(n,m);



	if(chota%2==0)
		cout<<"Malvika"<<endl;
	else
		cout<<"Akshat"<<endl;
}