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
	
	int n,h,m;
	scanf("%d %d %d", &n, &h, &m);
	
	int temp;
	int arr[n]; REP(i,0,n-1) arr[i]=h;
	REP(i,0,m-1){
		int l,r,x;
		scanf("%d %d %d", &l, &r, &x);
		while(r>=l){
			if(arr[l-1]>x){
				arr[l-1]=x;
			}
			l++;
		}
	}
	
	ll result=0;
	REP(i,0,n-1){
		result+=arr[i]*arr[i];
	}
	
	printf("%d", result);
	return 0;
}

