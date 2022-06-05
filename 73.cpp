#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--) {
		long long n,k;
		scanf("%lld %lld", &n, &k);

		if(n<k) {
			printf("%d\n", k-n);
		}

		else {
			if(n%2 == k%2) 
				printf("0\n");
			else 
				printf("1\n");
		}
	}
	return 0;
}