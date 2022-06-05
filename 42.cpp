#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MK make_pair
#define REP(i,a,b) for(ll i=a;i<=b;i++)  /*i is the iterator, a is the staring value of i and b is endvalue of i */											
#define SQ(a) (a)*(a)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pair<int,int> > vpi;
template <class T>

inline void read(T &ret) {
    char c;
    int sgn;
    if (c = getchar(), c == EOF) return ;
    while (c != '-' && (c < '0' || c > '9')) c = getchar();
    sgn = (c == '-') ? -1:1;
    ret = (c == '-') ? 0:(c - '0');
    while (c = getchar(), c >= '0' && c <= '9') ret = ret * 10 + (c - '0');
    ret *= sgn;
    return ;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n; read(n);
	ll b[n], a[n]; ll x=0;
	REP(i,0,n-1){
		read(b[i]);
		a[i]=x+b[i];
		x=max(x,a[i]);
	}
	
	REP(i,0,n-1){
		printf("%lld ", a[i]);
	}
	return 0;
}
