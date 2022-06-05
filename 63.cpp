/*Author : Bijoy Chandra Nath
Created : 29/07/20 07:57
Tag: 
*/
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define rep(i,a,b) for(int i=a; i<=b; i++)
typedef vector<int> vecInt;
typedef vector<ll> vecLong;
int i,j,k;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n, minimum = 1000000000007,ans;
	scanf("%lld", &n);
	long long inp[n], temp[n];
	rep(i,0,n-1){
		scanf("%lld", &inp[i]);
		temp[i] = inp[i];
		if(temp[i]<minimum){
			ans = i;
			minimum = temp[i];
		}
	}
	
	sort(inp, inp+n);
	
	if(inp[0] == inp[1]){
		printf("Still Rozdil\n");
	}
	else{
		cout<<ans+1<<endl;
	}
	return 0;
}
