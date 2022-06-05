/*
Author Name : Bijoy Chandra Nath
Problem Name : Rooms & Staircase (CF)
Problem Tags : 
Problem Rating : 
Date : 24th June 2020
Status : Solved.. Confirmed. But Not Submitted!!!!
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		string input;
		cin>>input;
		int result=0;
		if(input[0]=='1' || input[input.length()-1] == '1'){
			result=2*(input.length());
		}
		else{
			bool flag=false;
			int temp,stair_position=0;
			for(int i=0;i<input.length();i++){
				if(input[i]=='1'){
					stair_position=i;
					flag=true;
				}
			}
			if(!flag){
				result=input.length();
			}
			else{
				if(stair_position>=(input.length())/2){
					result = 2*(stair_position+1);
				}
				else{
					temp = (input.length()-1)-stair_position;
					result=2*(temp+1);
				}
			}
		}
		cout<<result<<endl;
	}
	return 0;
}
