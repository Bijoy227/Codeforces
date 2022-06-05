#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--) {
		long long n;
		cin>>n;

		long long ans, twoPower;
		for(int k=2; k<=100; k++) {
			twoPower = pow(2,k)-1;
			ans = n % twoPower;
			if(ans == 0) {
				ans = n / twoPower;
				printf("%lld\n", ans);
				break;
			}
		}
	}
	return 0;
}