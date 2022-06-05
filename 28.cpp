#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

int main()
{
	ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],arr[1005]={0},c=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            arr[a[i]]++;
            c++;
        }
        cout<<c<<endl;
        ll ans = 0;
        for(ll i=1;i<1005;i++)
        {
            if(c >= i)
                ans = i;
            c -= arr[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
