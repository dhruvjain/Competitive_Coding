#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>
using namespace std;
long gcd( long a, long b )
{
  if ( a==0 ) return b;
  return gcd ( b%a, a );
}
int main(){
    char s[50];
    int t,i,x,y,j,dot=0;
    float avg;
    scanf("%d",&t);
    while(t--){
        string s;
        cin>>s;
        //printf("%s\n",s );
        //printf("%c %c\n",s[2],s[6]);
        i=0;
        while(s[i]!='\0'){
            if(s[i]=='.')
            {   i++;
                dot=1;
                break;
            }
            i++;
        }
        if(dot==0){
            cout<<1<<endl;
            continue;
        }
        else{
            j=1;
            while(s[i]!='\0'){
            	if(s[i]!='\0')
            		j=j*10;
            	i++;
            }
            long num=1;
            for(int i=0;i<s.size();i++){
            	if(s[i]!='.')
            		num=num*10+(s[i]-48);


            }
           
            y=gcd(num,j);
            printf("%d \n",j/y);

        }


    }
return 0;
}
