
#include <cstdio>
#include <map>
#include <utility>
#include <cmath>

std::map<long long, std::pair<int, long long> > cf;

std::pair<int, long long> recursion(long long n)
{
	if (n == 0 || cf[n].first != 0)
	{
		return cf[n];
	}
	long long a = (long long)cbrt(n);
	long long b = a-1;
	std::pair<int, long long> ap = recursion(n - a*a*a), bp = recursion(a*a*a - b*b*b - 1);
	if (ap.first >= bp.first)
	{
		cf[n] = std::make_pair(ap.first+1, ap.second + a*a*a);
	}
	else
	{
		cf[n] = std::make_pair(bp.first+1, bp.second + b*b*b);
	}
	return cf[n];
}

int main()
{
	long long m;
	scanf("%lld", &m);
	recursion(m);
	printf("%d %lld\n", cf[m].first, cf[m].second);
}