#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define MK make_pair
#define repeat(i,a,b) for(int i=a;i<=b;i++)  /*i is the iterator, a is the staring value of i and b is endvalue of i */											
#define SQ(a) (a)*(a)

typedef long long ll;
typedef vector<int> vecInt;
typedef vector<ll> vecLong;
typedef pair<int,int> pairInt;
typedef vector<pair<int,int> > vpi;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n,x;
	scanf("%lld", &n);
	vecLong a;
	repeat(i,0,n-1){
		scanf("%lld", &x);
		a.pb(x);
	}
	ll count=0, minCount=0, zeroCount=0;
	repeat(i,0,n-1){
		if(a[i]<=-1){
			count+=abs(a[i]+1);
			a[i]=-1;
			minCount++;
		}
		else if(a[i]>1){
			count+=abs(a[i]-1);
			a[i]=1;
		}
		else if(a[i]==0){
			zeroCount++;
		}
	}
	ll output=0;
	if(minCount %2 ==0){
		output = count+zeroCount;
	}
	else{
		if(zeroCount){
			output=count+zeroCount;
		}
		else{
			output = (count+2);
		}
	}
	printf("%lld", output);
	return 0;
}
