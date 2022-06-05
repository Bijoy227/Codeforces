/*Author : Bijoy Chandra Nath
Created : 29/07/20 10:10
Tag: 
*/
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define rep(i,a,b) for(int i=a; i<=b; i++)
typedef vector<int> vecInt;
typedef vector<ll> vecLong;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n,m,sum,i;
    scanf("%lld%lld",&n,&m);
    ll a[100005];
    for(i=0; i<m; i++)
    {
        scanf("%lld",&a[i]);
    }
    sum=a[0]-1;
    for(i=0; i<m-1; i++)
    {
        if(a[i]>a[i+1])
        {
            sum+=a[i+1]+n-a[i];
        }
        else
            sum+=a[i+1]-a[i];
    }
    printf("%lld\n",sum);
	return 0;
}
