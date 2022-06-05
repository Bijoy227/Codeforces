#include<bits/stdc++.h>
using namespace std;

const int N = int(1e5+3);
int position[N];
int I,K,M; //loop variables

int main()
{
	int n;
	scanf("%d", &n);
	
	//not taking the array
	//instead, taking the postion of the values
	for(I=1;I<=n;I++)
	{
		int input;
		scanf("%d", &input);
		position[input] = I;
	}

	int m;
	scanf("%d", &m);
	long long firstPerson=0, secondPerson=0;
	for(I=1; I<= m; I++)
	{
		int query;
		scanf("%d", &query);
		firstPerson+=position[query];
		secondPerson+=(n+1)-position[query];
	}

	printf("%I64d %I64d\n", firstPerson, secondPerson);
	return 0;
}


