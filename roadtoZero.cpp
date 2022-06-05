#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		long long int x,y,a,b,result=0,temp;
		cin>>x>>y;
		cin>>a>>b;
		temp = abs(x-y);
		result = temp*a;
		temp = min(x,y);
		if(2*a*temp <= b*temp){
			result+=2*a*temp;
		}
		else{
			result+=b*temp;
		}
		cout<<result<<endl;
	}
	return 0;
}

