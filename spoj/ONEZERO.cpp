#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<1;break;
		}
		queue< pair<string,ll> > Q;
		Q.push(make_pair("1",1));

		while(!Q.empty()){
			pair<string,ll> pp = Q.front();
			Q.pop();
			string str = pp.first;
			ll rem = pp.second;
			if(rem==0){
				cout<<str<<endl;
				break;
			}
			int nextval = (rem*10)% n;
			if(nextval==0){
				string ans = str + "0";
				cout<<ans<<endl;
				break;
			}
			else{
				Q.push( make_pair(str + "0", nextval));
			}

			nextval = (rem*10 +1) % n;
			if(nextval==0){
				string ans = str + "1";
				cout<<ans<<endl;
				break;
			}
			else{
				Q.push( make_pair(str + "1",nextval));
			}

		}
	}
}