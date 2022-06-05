#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		string a,b,c;
		cin>>a>>b>>c;
		
		for(int i=0;i<a.length();i++){
			if(c[i]==b[i]){
				a[i]=c[i];
			}
			else{
				b[i]=c[i];
			}
		}
		
		if(a==b) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
