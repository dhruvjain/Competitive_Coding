#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef pair<int,pii> edge;

#define tr(vec,it) for(__typeof(vec.begin()) it = vec.begin();it!=vec.end();++it)
#define forup(i,a,b) for(int i=a; i<b; ++i)
#define fordn(i,a,b) for(int i=a; i>b; --i)
#define rep(i,a) for(int i=0; i<a; ++i)
#define rep2(i,a,b) for(__typeof(a) i = (a); i < (b) ; i++)

#define dforup(i,a,b) for(i=a; i<b; ++i)
#define dfordn(i,a,b) for(i=a; i>b; --i)
#define drep(i,a) for(i=0; i<a; ++i)

#define slenn(s,n) for(n=0; s[n]!=13 and s[n]!=0; ++n);s[n]=0

#define gi(x) scanf("%d",&x) // get int
#define gl(x) cin>>x // get long 
#define gd(x) scanf("%lf",&x) // scan int
#define gs(x) scanf("%s",x) // scan string

#define pis(x) printf("%d ",x) 
#define pin(x) printf("%d\n",x)
#define pls(x) cout<<x<<" "
#define pln(x) cout<<x<<"\n"
#define pds(x) printf("%.12f ",x)
#define pdn(x) printf("%.12f\n",x)
#define pnl() printf("\n")

#define sz size
#define fi first
#define sc second

#define ed first
#define eu second.first
#define ev second.second

#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()

const int inv=1000000000;
const int minv=-inv;

string addone(string num1,int& flag){
	if(num1[num1.size()-1]!='9'){
		num1[num1.size()-1] = (int)num1[num1.size()-1]+1;
		return num1; 
	}
	else{
		int j = num1.size()-1;
		while(num1[j]=='9' && j>0){
			num1[j]='0';
			j--;
		}
		if(num1[j]=='9' && j==0){
			flag = 1;
			return "10" + num1.substr(1);
		}
		else{
			num1[j] = (int)num1[j]+1;

			return num1;
		}

	}
}
int main(){
	int t;
	gi(t);
	while(t--){
		string num;
		cin>>num;
		int len = num.size();
		int i=0,j=num.size()-1;
		string num1,num2;
		if(len%2==0){
			num1= num.substr(0,len/2);
			num2 = num.substr(len/2,len/2);
			string temp_str = num1;
			reverse(all(temp_str));
			if(temp_str>num2)
				cout << num1 + temp_str<<endl;
			else{
				int flag = 0;
				string temp = addone(num1,flag);
				num1 = temp;
				reverse(all(temp));
				if(flag==1){
					cout<<num1 + temp.substr(1)<<endl;
				}
				else{
					cout<<num1 + temp <<endl;
				}
			}
		}
		else{
			num1 = num.substr(0,len/2);
			num2 = num.substr((len+1)/2,len/2);
			string temp_str = num1;
			reverse(all(temp_str));
			if(temp_str>num2)
				cout << num1 + num.substr(len/2,1) + temp_str <<endl;
			else if (temp_str==num2){
				string temp = num.substr(len/2,1);
				if(temp=="9"){
					int flag = 0;

					string temp2 = addone(num1+temp,flag);
					num1 = temp2;
					reverse(all(temp2));
					
					if(flag==1){
						cout<<num1 + temp2.substr(2)<<endl;
					}
					else{	
						cout<<num1 + temp2.substr(1) <<endl;
					}
				}
				else{
					temp[0] = (int)temp[0]+1;
					cout << num1 + temp + temp_str <<endl;
				}
				
			}
			else{

				int flag = 0;
				string temp = addone(num1,flag);
				num1 = temp;
				reverse(all(temp));
				if(flag==1){
					cout<<num1 + temp<<endl;
				}
				else{
					cout<<num1 + num.substr(len/2,1) + temp <<endl;
				}
			}
		}	

	}	
	return 0;
}	