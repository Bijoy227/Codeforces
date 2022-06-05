/*
Author : Bijoy Chandra Nath
Created : 28/07/20 16:18
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	int a = sqrt( x * z / y);
	int b = a * y / z;
	int c = z / a;
	cout<<4*(a+b+c)<<endl;
	return 0;
}
