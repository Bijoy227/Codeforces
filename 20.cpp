#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		int area[4];
		
		area[0]=(a-(x+1))*b; area[1]=a*(b-(y+1)); area[2]=x*b; area[3]=a*y;
		
		sort(area, area+4);
		
		cout<<area[3]<<endl;
	
	}
	return 0;
}
