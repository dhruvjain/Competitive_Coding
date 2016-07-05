#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c,val;
	cin>>a>>b>>c;

	int max_val=-1;

	val = a+b+c;
	if(val>max_val)
		max_val=val;
	val=a+b*c;
	if(val>max_val)
		max_val=val;
	val= a*b+c;
	if(val>max_val)
		max_val=val;
	val = a*b*c;
	if(val>max_val)
		max_val=val;
	val = (a+b)*c;
	if(val>max_val)
		max_val=val;
	
	val = a*(b+c);
	if(val>max_val)
		max_val=val;
	
	cout<<max_val<<endl;

}