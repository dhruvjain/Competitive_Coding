#include <bits/stdc++.h>

using namespace std;

int main(){
	double r,x,y,x1,y1;

	cin>>r>>x>>y>>x1>>y1;
	double dist = sqrt((x-x1)*(x-x1) +  (y-y1)*(y-y1));
	
	dist  = dist/(2*r);
	cout<<ceil(dist)<<endl;

}