#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define INF 100007
/*
int main()
{
	int T;
	cin>>T;
	while(T--){
		int x,n,m;
		cin>>x>>n>>m;              //n for void and m for Light
		int maxVoidPoint=INF, maxLightPoint=INF;
		if(n==0 && m==0){
			cout<<"NO"<<endl;
			continue;
		}
		while(1){
			if(n) maxVoidPoint = (x/2)+10;
			if(m) maxLightPoint = (x-10);
			
			if(maxVoidPoint <= maxLightPoint){
				x = maxVoidPoint;
				n--;
			}
			else{
				x = maxLightPoint;
				m--;
			}
			cout<<x<<endl;
			if(x<=0){
				cout<<"YES"<<endl;
				break;
			}
			else{
				if(n==0 && m==0){
					cout<<"NO"<<endl;
					break;
				}
			}
		}
	}
	
	return 0;
}
*/

int main()
{
	int T;
	cin>>T;
	while(T--){
		int x,n,m;
		cin>>x>>n>>m;
		if(n==0 && m==0){
			cout<<"NO"<<endl;
			continue;
		}
		while(n>=0)
		{
			x=(x/2)+10;
			n--;
		}
		while(m>=0)
		{
			x=x-10;
			m--;
		}
		
		if(x<=0)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
		
		
	}
}
