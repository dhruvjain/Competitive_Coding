#include<bits/stdc++.h>

using namespace std;

#define sd(x) scanf("%d",&x);
#define LL long long
#define LD long double
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define Fill(a, b) memset(a, b, sizeof(a))
#define INF 2000000009

typedef pair<int,int> PII;
typedef vector<int> VI;

#define N 62

LL ar[N];

int get_ans(LL a,int i,int rev)
{
    //cout<<a<<" "<<i<<endl;
    if(a==1)return rev;
    //else if(a==0)return 1;
    if(a<ar[i])
    {
        return get_ans(a,i-1,rev);
    }
    else if(a>ar[i])
    {
        return get_ans(ar[i+1] - a,i-1,1-rev);
    }
    else return rev;
}

void pre()
{
    ar[0] = 1;
    for(int i=1;i<N;i++)
    {
        ar[i] = 2*ar[i-1];
    }
}


void solve()
{
    LL k;
    cin>>k;
    cout<<get_ans(k,60,0)<<endl;;
}

int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	pre();
	int t=1;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		printf("Case #%d: ",i);
		solve();
	}
}

