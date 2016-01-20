#include<iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;

int F(long mid,long* array,int c,int n){

	int cowplaced=1;
	long lastpos=array[0];

	for(int i=1;i<n;i++){

		if(array[i]-lastpos>=mid){
			cowplaced++;
		
			if(cowplaced==c){
				return 1;
			}
			lastpos=array[i];

		}
   }
	return 0;

}
void printarray(int* array,int n){

	for(int i=0;i<n;i++)
		cout<<array[i]<<endl;
}
int main()
{
	int n,c;
	int t;
	cin>>t;
    while(t--){
    cin>>n;
	cin>>c;
	long* array=new long[n];
	for(int i=0;i<n;i++)
		cin>>array[i];
	sort(array,array+n);
    //printarray(array,n);
	long start=0,end=array[n-1]-array[0]+1,mid;
	while(end-start>1){
		mid=(start+end)>>1;
		
		if(F(mid,array,c,n)){
			start=mid;
		}
		else
			end=mid;
	}
	printf("%ld\n",start);
   }


	return 0;
}