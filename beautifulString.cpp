/*
Author Name : Bijoy Chandra Nath
Problem Name : Beautiful String (CF Round #604(DIV 2))
Problem Tags : Constructive Algorithm, Greedy
Problem Rating : 1000
Date : 23 June 2020
Status : Not Submitted. But Confirmed.
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
		
		for(int i=0; i<input.length()-1; i++){
			if(input[i] == '?' && i!=0){
				if(input[i-1] == 'a' && (input[i+1]=='b' || input[i+1]=='?')){
					input[i] = 'c';
				}
				else if(input[i-1] == 'b' && (input[i+1]=='c' || input[i+1]=='b'|| input[i+1]=='?')){
					input[i] = 'a';
				}
				else if(input[i-1]=='b' && input[i+1]=='a'){
					input[i] = 'c';
				}
				else if(input[i-1]=='c' && input[i+1]=='b'){
					input[i]='a';
				}
				else{
					input[i] = 'b';
				}
			}
			else if(input[i]=='?' && i==0){
				if(input[i+1]=='a' || input[i+1]=='c' || input[i+1]=='?'){
					input[i]='b';
				}
				else if(input[i+1]=='b' || input[i+1]=='c'|| input[i+1]=='?'){
					input[i] = 'a';
				}
			}
		}
		int a = input.length()-1;
		if(input[a] == '?'){
			if(input[a-1] == 'a' || input[a-1] =='c') input[a]='b';
			else if(input[a-1] == 'b' || input[a-1] == 'c') input[a]='a';
		}
		bool temp = true;
		for(int i=0;i<input.length()-1;i++){
			if(input[i] == input[i+1]){
				temp = false;
				break;
			}
		}
		if(temp){
			cout<<input<<endl;
		}
		else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
