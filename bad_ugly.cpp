/*
Author Name : Bijoy Chandra Nath
Problem Name : Bad Ugly Numbers (CF Global Round 7)
Problem Tags : Constructive Algorithm, Number Theory 
Problem Rating : 1000
Date : 19th June 2020
Status : Not solved. Solved for low number. It may be a Big Mod Category problem. Have to code further!!!!
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		if(n==1) cout<<"-1"<<endl;
		else{
			long long int temp, count=0;
			temp = pow(10,n) - 1;
			for(long long int i=temp;i>=pow(10,n-1);i--){
				long long int x = i;
				while(x){
					int remainder=x%10;
					x=x/10;
					if(i%remainder != 0){
						count++;
					}
					else{
						count=0;
						break;
					}
				}
				if(count == n){
					cout<<i<<endl;
					break;
				}
			}
		}
	}
	return 0;
}

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		unsigned long long int x = pow(10,n) - 2;
		cout<<x<<endl;
	}
	return 0;
}
