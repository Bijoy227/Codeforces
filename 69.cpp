/*Author : Bijoy Chandra Nath
Created : 29/07/20 20:58
Tag:
*/
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define rep(i,a,b) for(long long i=a; i<=b; i++)
typedef vector<int> vecInt;
typedef vector<ll> vecLong;
long long i,j,k;

int main() {
	int n;
	while(~scanf("%d", &n)) {
		vector<int> x(n);
		for(i = 0; i < n; ++ i)
			scanf("%d", &x[i]);
		sort(x.begin(), x.end());
		int q;
		scanf("%d", &q);
		rep(i,0,q-1) {
			int y;
			scanf("%d", &y);
			int ans = upper_bound(x.begin(), x.end(), y) - x.begin();
			printf("%d\n", ans);
		}
	}
	return 0;
}
