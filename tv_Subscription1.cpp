/*
Author Name : Bijoy Chandra Nath
Problem Name : TV Subscription (Easy Version)
Problem Tags : 
Problem Rating : 
Date : 24th June 2020
Status : Understand the way!!! Just have to implement it correctly...!!
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,k,d;
		cin>>n>>k>>d;
		int arr[n];
		int arr2[k];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int temp=n;
		int result=0,sum=0;
		for(int i=0;i<=n-d;i++){
			for(int x=0;x<k;x++) arr2[x]=0;
			result=100000;
			sum=0;
			for(int j=0;j<k;j++){
				int temp=arr[j];
				if(arr2[temp] == 0){
					arr2[temp]++;
				}
			}
			for(int a=0;a<k;a++) sum+=arr2[a];
			if(sum<=result){
				result = sum;
			}
			for(int a=0;a<temp-1;a++){
				arr[a]=arr[a+1];
			}
			temp--;
		}
		cout<<result<<endl;
	}
	return 0;
}
