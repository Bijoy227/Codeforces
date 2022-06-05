/*
Author Name : Bijoy Chandra Nath
Problem Name : Happy Birthday, Polycrap! (CF Round #606 (DIV 2))
Solving Date : 19th June 2020
Status : Solved but Time Limit need to reduce
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin>>T;
	while(T--){
		long long int n,count=0,arr,temp,x;
		cin>>n;
		
		for(long long int i=1;i<=n;i++){
			x = i;
			bool result = true;
			arr=x%10;
			while(x>0){
				temp = x%10;
				x=x/10;
				if(arr != temp){
					result = false;
					break;
				}
			}
			if(result){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
