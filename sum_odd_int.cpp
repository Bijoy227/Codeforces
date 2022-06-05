/*
Author Name : Bijoy Chandra Nath
Problem Name : Sum of Odd Integers (CF Round #84 (DIV 2))
Solving Date : 17th June 2020
Status : Not Submitted
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		long long int n,k;
		cin>>n>>k;
		if(n%2 == 0 && k%2 == 0){
			if(sqrt(n) >= k){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else if(n%2 != 0 && k%2 != 0){
			if(sqrt(n) >= k){
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
