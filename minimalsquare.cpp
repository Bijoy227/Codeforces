#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int a,b;
		cin>>a>>b;
		int c = max(a,b);
		int res = sqrt(2*a*b);
		float result= (float) sqrt(2*a*b);
		if(result - res > 0.0){
			if(2*a*b>c*c){
				c++;
				cout<<c*c<<endl;
			}
			else{
				cout<<c*c<<endl;
			}
		}
		else{
			cout<<res*res<<endl;
		}
	}
	return 0;
}
