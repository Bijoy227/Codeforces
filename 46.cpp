#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define mk make_pair
#define repeat(i,a,b) for(ll i=a;i<=b;i++)  /*i is the iterator, a is the staring value of i and b is endvalue of i */											
#define SQ(a) (a)*(a)

typedef long long ll;
typedef vector<ll> vecInt;
typedef pair<int,int> pairInt;
typedef vector<pair<int,int> > vpi;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t;
	cin>>t;
	while(t--){
		ll n,k,d;		//k = number of show d = days
		cin>>n>>k>>d;
		vecInt a; ll b;
		repeat(i,0,n-1){
			cin>>b;
			a.pb(b);
		}
		set<ll> m;
		ll an=10000000000007;
		repeat(i,0,n-1){
			ll j=i;
			for(b=0;b<d;b++){
				m.insert(a[j]);
				j++;
			}
			if(m.size()<=an){
				an = m.size();
			}
			m.clear();
			if(n-i == d){
				break;
			}
		}
		cout<<an<<endl;
	}
	return 0;
}

