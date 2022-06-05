#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int count[101] = {0};

		for(int i=1; i<=n; i++) {
			int x;
			scanf("%d", &x);
			++count[x];
		}

		int ans = 0;

		for(int i=0; count[i]>=2; i++)
			ans++;
		for(int i=0; count[i]>=1; i++)
			ans++;

		printf("%d\n", ans);

	}
	return 0;
}
