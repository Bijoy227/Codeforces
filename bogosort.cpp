/*
Author Name : Bijoy Chandra Nath
Problem Name : Bogosort (CF Round #    (DIV ))
Solving Date : 18th June 2020
Status : Not Submitted but Confirmed
*/

/* First Way of Solving */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int len;
		cin>>len;
		int array[len];
		for(int i=0;i<len;i++){
			cin>>array[i];
		}
		
		sort(array, array+len);
		
		for(int i=len-1;i>=0;i--){
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


/*Second Way of Solving */

