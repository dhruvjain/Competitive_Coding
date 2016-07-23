#include <bits/stdc++.h>

using namespace std;

int main(){
	map<string, string> mapa2b;
	map<string, string> mapb2a;

	int n,m;
	cin>>n>>m;

	for(int i=0;i<m;i++){
		string a,b;
		cin>>a>>b;
		if(a.size()<=b.size()){
			mapa2b[a]=a;
			mapb2a[b]=a;
		}
		else{
			mapa2b[a]=b;
			mapb2a[b]=b;	
		}

	}
	for(int i=0;i<n;i++){
		string input;
		cin>>input;
		if(mapa2b.find(input)!=mapa2b.end())
			cout<<mapa2b[input]<<" ";
		else
			cout<<mapb2a[input]<<" ";
	}
	return 0;

}