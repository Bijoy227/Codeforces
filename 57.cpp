/*
Author : Bijoy Chandra Nath
Created : 28/07/20 16:18
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int inp[10];
	int i,j, sum=0;
	for(i=1; i<=7; i++){
		cin>>inp[i];
		sum+=inp[i];
	}
	
	bool flag = true;
	int ratio = (n / sum)+1;
	for(i=1; i<=ratio; i++){
		if(flag){
			for(j=1;j<=7;j++){
				int temp = inp[j];
				n = n - temp;
				if(n <= 0){
					cout<<j<<endl;
					flag = false;
					break;
				}
			}
		}
	}
	return 0;
}
