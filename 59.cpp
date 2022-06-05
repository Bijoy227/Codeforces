/*
Author : Bijoy Chandra Nath
Created : 28/07/20 16:35
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int in[n+3];
	int i,j;
	for(i=1; i<=n; i++){
		cin>>in[i];
	}
	int a,b;
	int diff, comp = 1000000;
	for(i=1;i<=n-1;i++){
		diff = abs(in[i] - in[i+1]);
		if(diff <= comp){
			a = i;
			b = i+1;
			comp = diff;
		}
	}
	int temp = abs(in[n] - in[1]);
	if(temp <= comp){
		cout<<n<<" "<<"1"<<endl;
	}
	else{
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}
