#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--) {
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++)
			scanf("%d", &a[i]);

		int flag = 0;
		for(int i=1; i<n-1; i++) {
			if((a[i]>a[i-1]) && (a[i]>a[i+1])) {
				printf("YES\n");
				printf("%d %d %d\n", i, i+1, i+2);
				flag = 1;
				break;
			}
		}

		if(flag == 0)
			printf("NO\n");
	}
	return 0;
}