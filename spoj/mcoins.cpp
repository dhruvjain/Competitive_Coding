#include<iostream>

using namespace std;


int main(){


	int l,k,m,temp;
	
	cin>>k>>l>>m;

    if(l<k){
    	temp=k;
    	k=l;
    	l=temp;
    }
	





	bool win[ 1000001 ];
    win[ 1 ] = true;
    win[ 0 ] = false;
    for (int i = 2; i <= 1000000; ++i ) {
        if ( !win[ i - 1 ] ) {
            win[ i ] = true;
        }
        else if ( i - k >= 0 && !win[ i - k ] ) {
            win[ i ] = true;
        }
        else if ( i - l >= 0 && !win[ i - l ] ) {
            win[ i ] = true;
        }
        else {
            win[ i ] = false;
        }
    }
	string a;
	int i=0,n;
	while(m--){

			cin>>n;
			if(win[n]){
				cout<<"A";
				//a+="A";
			}
			else
				cout<<"B"	;
			
	}

    cout<<endl;


}
