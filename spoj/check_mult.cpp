#include <bits/stdc++.h>

using namespace std;


int power(int a,int n){

	if(n==0)
		return 1;
	if(n==1)
		return a;
	int temp =a;
	a=power(a,n/2);
	a = a*a;

	if(n%2!=0)
		a=a*temp;

	return a;

}
int main(){
	int a,n;
	cin>>a>>n;
	cout<<power(a,n);
}