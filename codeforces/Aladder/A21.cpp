#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,a,b,val1,val2,div;
	cin>>n>>m>>a>>b;
	div = n/m;
	val1 = n*a;
	int remain = (n%m)*a;
	if(remain>b)
		val2 = div*b +b;
	else
		val2 = div*b+ remain;
	
	cout<<min(val2,val1)<<endl;

} 