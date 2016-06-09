#include <bits/stdc++.h>

using namespace std;

#define fi(n) scanf("%d",&n)
#define all(v) v.begin(),v.end()
#define tr(vec,it) for(__typeof(vec.begin()) it = vec.begin();it!=vec.end();++it)
#define vi vector<int>
#define vvi vector <vi> 
#define rep(i,a,b) for(__typeof(a) i = (a); i < (b) ; i++)
#define pb push_back
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>

char isprime[10000];
int Primes[10000]={0};
bool visited[10000];
void seive(){

	for(int i=3;i*i<10000;i+=2){
		if(isprime[i]){
			
			Primes[i]=1;
			
			for(int j=i*i;j<10000;j+=i+i){
				isprime[j]=0;
			}
		}
	}
	for(int i=101;i<10000;i+=2)
		if(isprime[i])
			Primes[i]=1;
}

int main(){
	memset(isprime,1,sizeof(isprime));
	
	ios::sync_with_stdio(false);
	seive();
	int t;
	cin>>t;
	while(t--){
		int start,end,len,found=0;
		cin>>start>>end;
		queue< pair<int,int> > Q;
		memset(visited,false,sizeof(visited));
		Q.push(make_pair(start,0));
		visited[start]=true;
		while(!Q.empty()){
			int num = Q.front().first;
			if(num==end){
				found=1;cout<<Q.front().second<<endl;break;
			}
			len=Q.front().second+1;
			Q.pop();
			string str_orignal=to_string(num);
			
			rep(i,0,4){
				string str=str_orignal;
				for(int j=0;j<=9;j++){
					if(i!=0 && j!=str_orignal[i]-'0'){
						str[i]=j+'0';
						int num2=stoi(str);
						if(Primes[num2] && !visited[num2])
							Q.push(make_pair(num2,len)),visited[num2]=true;
					}
					else if(i==0 && j!=0 && j!=str_orignal[i]-'0'){
						str[i]=j+'0';
						int num2=stoi(str);

						if(Primes[num2] && !visited[num2])
							Q.push( make_pair(num2,len)),visited[num2-1000]=true;
					}

				}
			}
			
		}
		if(found==0)
			cout<<"Impossible"<<endl;
	}
}