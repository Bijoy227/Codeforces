/*
Author : Bijoy Chandra Nath
Created : 29/07/20 07:36
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,k;
	scanf("%lld %lld", &n, &k);
	
	long long odd, even;
	if(n & 1){
		odd = (n/2) + 1;
		even = n-odd;
		if(k<=odd){
			cout<<(2*k - 1)<<endl;
		}
		else{
			k = k-odd;
			cout<<(2*k)<<endl;
		}
	}
	else{
		odd = n / 2;
		even = odd;
		if(k<=odd){
			cout<<(2*k - 1)<<endl;
		}
		else{
			k = k-odd;
			cout<<(2*k)<<endl;
		}
	}
	
	return 0;
}
