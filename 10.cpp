#include<bits/stdc++.h>
using namespace std;

int fu(int a, int b, int c)
{
	int count=0;
	if(a!=0 || b!=0 || c!=0){
		if(c>0){
			count++;
			c--;
		}
		if(b>0){
			count++;
			b--;
		}
		if(a>0){
			count++;
			a--;
		}
		if(b>0 && c>0){
			count++;
			b--;c--;
		}
		if(a>0 && c>0){
			count++;
			a--;c--;
		}
		if(a>0 && b>0){
			count++;
			a--;b--;
		}
		if(a>0 && b>0 && c>0){
			count++;
		}
	}
	return count;
}

void solve()
{
	int a, b, c;
    cin >> a >> b >> c;
    int ans = fu(a, b, c);
    ans = max(ans, fu(b, a, c));
    ans = max(ans, fu(a, c, b));
    ans = max(ans, fu(c, a, b));
    ans = max(ans, fu(b, c, a));
    ans = max(ans, fu(c, b, a));
    cout << ans << endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		solve();
	}
	return 0;
}
