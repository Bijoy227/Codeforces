/*
Author Name : Bijoy Chandra Nath
Problem Name : Shuffle Hashing
Problem Tags : Brute Force, Implementation, Strings
Problem Rating : 1000
Date : 19th June 2020
Status : Solved. Confirmed! But not submitted!!
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int sum=0;
		string p,h;
		cin>>p>>h;
		
		if(p.length() > h.length()) cout<<"NO"<<endl;
		else{
			for(int i=0;i<p.length();i++) sum+=p[i];
			bool temp = false;
			
			int z = h.length();
			
			while(z>=p.length()){
				int sum1=0;
				for(int j=0;j<p.length();j++){
					sum1+=h[j];
				}
				if(sum1 != sum){
					for(int k=0;k<h.length()-1;k++) {
						h[k] = h[k+1];
					}
					z--;
				}
				else{
					temp = true;
					cout<<"YES"<<endl;
					break;
				}
			}
			if(!temp) cout<<"NO"<<endl;
		}
	}
	return 0;
}
