#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;
	int current=1,count=0;
	for(int i=0;i<n;i++){
		int l,r;
		cin>>l>>r;
		while((current+x)<=l) current+=x;
		count+=(r-current+1);
		current=r+1;
	}
	
	cout<<count<<endl;
	return 0;
}
