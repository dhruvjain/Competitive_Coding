#include <bits/stdc++.h>

using namespace std;

int main(){
	long long a,d,n,x1,x2,sum;
	int t;
	cin>>t;

	while(t--){
		cin>>x1>>x2>>sum;
		n= (sum*2)/(x1+x2);

		d = (x2-x1)/(n-5);

		a = x1-2*d;

		cout<<n<<endl;
		for(int i=1;i<=n;i++)
			printf("%lld ",a+(i-1)*d );
		printf("\n");
	}



}