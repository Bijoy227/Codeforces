#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define MK make_pair
#define REP(i,a,b) for(int i=a;i<=b;i++)  /*i is the iterator, a is the staring value of i and b is endvalue of i */											
#define SQ(a) (a)*(a)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pair<int,int> > vpi;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n,i,x,r,j,k,ans=0,c=0,error=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++){
        if(s[i]=='+') ans++;
        else ans--;
        if(ans<0) ans=0;
    } 
    cout<<ans;
    return 0; 
}
