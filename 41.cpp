#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MK make_pair
#define REP(i,a,b) for(int i=a;i<=b;i++)  /*i is the iterator, a is the staring value of i and b is endvalue of i */											
#define SQ(a) (a)*(a)
#define MAX 1000007
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
    int t, n, x;
    int a[110];
    read(t);
    while (t--) {
        int cnt[1010] = {0};
        read(n), read(x);
        for (int i = 0; i < n; i++) {
            read(a[i]);
            cnt[a[i]]++;
        }
        int k = 0;
        for (int i = 1; x; i++) {
            if (cnt[i] == 0) x--, k = i, cnt[i]++;
        }
        for (int i = k; ; i++) {
            if (cnt[i] == 0) {
                k = i - 1;
                break;
            }
        }
        printf("%d\n", k);
    }
    return 0;
}
