#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int a1,a2,b1,b2;
		cin>>a1>>b1>>a2>>b2;
		
		int sum=(a1*b1) + (a2*b2);
		
		if(sqrt(sum)==a1 || sqrt(sum)==b1){
			if((max(a1,b1)==max(a2,b2)) && min(a1,b1)+min(a2,b2) == max(a1,b1)){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
