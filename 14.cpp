#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		string a;
		char b[1000]; int j=0;
		cin>>a;
		for(int i=0;i<a.length();i+=2){
			b[j]=a[i];
			j++;
		}
		int y=a.length()-1;
		b[j]=a[y];
		
		for(int i=0;i<=j;i++) cout<<b[i];
		cout<<endl;
	}
	return 0;
}
