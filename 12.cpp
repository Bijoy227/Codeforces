#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef long long int lli;

int main()
{
	lli T;
	cin>>T;
	while(T--){
		lli x,y,n;
		cin>>x>>y>>n;
		lli div=(n-y)/x;
		cout<<div*x+y<<endl;
	}
	return 0;
}


