#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	long long int arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int prev_ind = 0,right_ind=0;

	int j=1;
	while(j<n){
		if(arr[j]>=arr[prev_ind])
			prev_ind = j,j++;
		else{
			while(j<n && arr[j]<arr[j-1]){
				j++;
			}	
			right_ind = j-1;
			break;
		}
	}
	if(prev_ind==n-1){
		cout<<"yes\n"<<1<<" "<<1<<endl;
		return 0;
	}
	if(prev_ind!=0 && arr[prev_ind-1]>arr[right_ind] || arr[j]<arr[prev_ind] ){
		cout<<"no"<<endl;return 0;
	}
	
	while(j<n && arr[j]>=arr[j-1])
		j++;
	if(j==n){
		cout<<"yes\n"<<prev_ind+1<<" "<<right_ind+1<<endl;
	}
	else
		cout<<"no"<<endl;

}