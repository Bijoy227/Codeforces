/*
 * Author: Bijoy Chandra Nath
 * Created: 7/27/2020 11:46AM
*/
#include<bits/stdc++.h>
using namespace std;

int x[1000], y[1000];

int main()
{
	int input;
	scanf("%d", &input);
	
	int i,j;
	for(i=0;i<input;i++)
		scanf("%d %d", &x[i], &y[i]);

	int ans = 0;
	for(i=0; i<input; i++)
	{
		int s = 0;
		for(j=0; j<input; j++)
		{
			if(x[i]==x[j] && y[i]>y[j])
				s |=1;
			if(x[i]==x[j] && y[i]<y[j])
				s |=2;
			if(x[i]>x[j] && y[i]==y[j])
				s |= 4;
			if(x[i]<x[j] && y[i]==y[j])
				s |=8;
		}

		if(s==15)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}

