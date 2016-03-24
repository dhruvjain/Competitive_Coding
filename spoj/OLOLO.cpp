#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int num=0;
	int x;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		num = num ^ x;
	}
	printf("%d\n",num);
}