/*Author : Bijoy
Problem Name: Two Teams Composing
Tag: 
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int in[n];
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%d", &in[i]);
		}
		sort(in,in+n);
		int rep = 1, repMax = 1, diff=1;
		for(i=1;i<n;i++)
		{
			if(in[i]==in[i-1])
			{
				rep++;
				repMax = max(rep, repMax);
			}
			else
			{
				diff++;
				rep = 1;
			}
		}
		int ans = max(min(diff, repMax-1), min(diff-1, repMax));
		printf("%d\n", ans);
	}
	return 0;
}
