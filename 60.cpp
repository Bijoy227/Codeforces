/*
Author : Bijoy Chandra Nath
Created : 28/07/20 20:49
UVA: 1230
Topic : Binary Exponentiation
*/

#include<bits/stdc++.h>
using namespace std;


long long solveFunction(long long x, long long y, long long M)
{
	x = x%M;
	long long ans = 1;
	while(y>0)
	{
		if(y & 1)
		{
			ans = ans * x % M;
		}
		
		x = x*x %M;
		y >>= 1;
	}
	
	return ans;
}


int main()
{
	int c;
	long long x, y, n;
	int i;
	while(scanf("%d", &c))
	{
		if(!c) return 0;
		for(i=1; i<=c; i++)
		{
			scanf("%lld %lld %lld", &x, &y, &n);
			long long answer = solveFunction(x, y, n);
			printf("%lld\n", answer);
		}
	}
	return 0;
}
