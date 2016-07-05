#include <bits/stdc++.h>

using namespace std;

int main(){

	int x1,y1,x2,y2,x3,y3,x4,y4;

	cin>>x1>>y1>>x2>>y2;

	if(x1!=x2 && y1!=y2){

		if(abs(x1-x2)!=abs(y1-y2)){
			cout<<-1<<endl;
			return 0;
		}
	}
	if(x1==x2 || y1==y2){
		if(x1==x2){
			cout<<x1+abs(y2-y1)<<" "<<y1<<" "<<x1+abs(y2-y1)<<" "<<y2<<endl;
		}
		else{
			cout<<x1<<" "<<y1+abs(x2-x1)<<" "<<x2<<" "<<y1+abs(x2-x1)<<endl;
		}
	}
	else{
		cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
	}

}