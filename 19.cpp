#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main()
{
	int T;
	cin>>T;
	while(T--){
		lli a,b,diff;
		cin>>a>>b;
		
		if(a==b){
			cout<<"0"<<endl;
		}
		else{
			if(a<b){
				diff=b-a;
				if(diff%2!=0) cout<<"1"<<endl;
				else cout<<"2"<<endl;
			}
			else{			//a>b
				diff=a-b;
				if(diff%2!=0) cout<<"2"<<endl;
				else cout<<"1"<<endl;
			}
		}
	}
	return 0;
}
