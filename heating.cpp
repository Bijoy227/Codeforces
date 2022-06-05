/*
Author Name : Bijoy Chandra Nath
Problem Name : Heating (CF Round #77 (DIV 2))
Problem Tags : Maths
Problem Rating : 1000
Date : 24th June 2020
Status : Solved. Not Submitted but Confirmed!!!
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin>>N;
	while(N--){
		int c,sum;
		cin>>c>>sum;
		int arr[c];
		for(int i=0;i<c;i++) arr[i]=0;
		int i;
		for(i=0;i<c;i++){
			arr[i]++;
			sum--;
			if(sum>0 && i==c-1){
				i=-1;
			}
			else if(sum<=0){
				break;
			}
		}
		long long int result=0;
		for(int i=0;i<c;i++){
			long long int temp = arr[i]*arr[i];
			result+=temp;
		}
		cout<<result<<endl;
	}
	return 0;
}
