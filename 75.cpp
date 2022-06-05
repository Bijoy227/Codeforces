#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	scanf("%lld", &t);
	while(t--) {
		long long n;
		scanf("%lld", &n);

		long long count=0;
		if(n==1) {
			printf("0\n");
			continue;
		}
		while(1) {
			if(n%6 == 0) {
				n = n/6;
				count++;
				if(n == 1) {
					printf("%d\n", count);
					break;
				}
			}
			else {
				n = n*2;
				count++;
			}

			if(count > 1000 && n != 1) {
				printf("-1\n");
				break;
			}
		}
	}
	return 0;
}