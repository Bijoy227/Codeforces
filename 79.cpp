#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--) {
		long long a;
		scanf("%lld", &a);
		
		long long in[a];
		for(long long i=0; i<a; i++) {
			scanf("%lld", &in[a]);
		}

		bool canDo = false;
		for(long long i=1; i<a; i++) {
			if(in[i] >= in[i-1]) {
				canDo = true;
				break;
			}
		}

		if(canDo)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}