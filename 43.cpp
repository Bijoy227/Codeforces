#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define mk make_pair
#define repeat(i,a,b) for(int i=a;i<=b;i++)  /*i is the iterator, a is the staring value of i and b is endvalue of i */											
#define SQ(a) (a)*(a)

typedef long long ll;
typedef vector<int> vecInt;
typedef pair<int,int> pi;
typedef vector<pair<int,int> > vpi;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	scanf("%d", &n);
	vecInt v, a;
	for(int i=0; i<n; i++){
		int x;
		scanf("%d", &x);
		v.pb(x);
	}
	a=v;
	sort(a.begin(), a.end(), greater<int>());
	int result = 1, x=1;
	repeat(i,1,n-1){
		result += (a[i]*x)+1;
		x++;
	}
	printf("%d\n", result);
	repeat(i,0,n-1){
		int k = a[i]; 
		repeat(j,0,n-1){
			if(k==v[j]){
				printf("%d ", j+1);
				v[j]=0;
				break;
			}
		}
	}
	return 0;
}
