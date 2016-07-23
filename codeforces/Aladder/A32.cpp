#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,v;
	cin>>n>>v;
	set<int> sellers;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		for(int j=0;j<k;j++){
			int num;
			cin>>num;
			if(num<v)
				sellers.insert(i+1);
		}
	}
	cout<<sellers.size()<<endl;
	int count = sellers.size();
	set<int>::iterator it;
  	for (it = sellers.begin(); it != sellers.end(); it++) {
      cout << *it<<" ";
  	}
	
}