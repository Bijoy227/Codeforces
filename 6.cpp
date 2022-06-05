#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		lli a,b,n,count=0;
		cin>>a>>b>>n;
		while(1){
			if(a>=b){
				b+=a;
				count++;
				if(b>n) break;
			}
			else{
				a+=b;
				count++;
				if(a>n) break;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
