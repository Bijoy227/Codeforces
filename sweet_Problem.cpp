/*
Author Name : Bijoy Chandra Nath
Problem Name : Sweet Problem(CF Round #603 (DIV 2))
Problem Tags : Maths
Problem Rating : 1100
Date : 23rd June 2020
Status : Not Solved!!! :( :( 
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		long long int a,b,c,result=0,temp;
		cin>>a>>b>>c;
		long long int arr[3]={a,b,c};
		sort(arr, arr+3);
		if(arr[2] ==arr[1] && arr[2] != 1){
			while(1){
				if(arr[2]>=arr[1]){
					if(arr[1]>=arr[0]){
						result++;
						arr[2]--;
						arr[1]--;
					}
					else if(arr[1]<arr[0]){
						result++;
						arr[0]--;
						arr[1]--;
					}
				}
			}
		}
		else{
			result = min(arr[2],arr[1]);
			temp=arr[2]-arr[1];
			a = arr[0];
			if(temp!=0){
				result+=min(a,temp);
			}
		}
		cout<<result<<endl;
	}
	return 0;
}
