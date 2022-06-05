/*
Author : Bijoy Chandra Nath
Created : 28/07/20 20:49
UVA: 374
Topic : Binary Exponentiation
*/

#include<bits/stdc++.h>
using namespace std;


long long BigMod(long long B, long long P, long long M)
{
	B = B % M;
	long long ANSWER = 1;
	
	while(P>0){
		if(P & 1)
			ANSWER = ANSWER * B % M;
		B = B*B % M;
		P >>= 1;
	}
	
	return ANSWER;
}


int main()
{
	long long B,P,M;
	while(scanf("%lld %lld %lld", &B, &P, &M) == 3)
	{
		long long ANSWER = BigMod(B,P,M);
		printf("%lld\n", ANSWER);
	}
	return 0;
}
