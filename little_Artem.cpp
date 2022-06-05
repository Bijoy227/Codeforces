/*
Read in the name of GOD, who created you!
Author Name  : Bijoy Chandra Nath
Problem Name : Little Artem (CF Round #632(DIV 2))
Solving Date : 16th June 2020
Problem Status: Solved!
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,m,black=0,white=0;
		cin>>n>>m;
		char array[n][m];
		
		int temp = 1;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(temp == 1){
					array[i][j] = 'B';
					temp = 0;
				}
				else{
					array[i][j] = 'W';
					temp = 1;
				}
			}
			if(array[i][m-1] == 'W' && m%2==0) temp = 0;
			if(array[i][m-1] == 'B' && m%2==0) temp = 1;
		}
		if((n*m) % 2 == 0) array[0][1] = 'B';
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<array[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}
