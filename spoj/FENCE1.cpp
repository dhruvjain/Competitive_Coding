#include <bits/stdc++.h>

using namespace std;

int main(){

	while(1){
		int x;
		cin>>x;
		if(x==0)
			break;

		float ans  = (x*x)/(2*M_PI);
		printf("%0.2f\n",ans);
	}
}