/*Author : Bijoy Chandra Nath
Created : 29/07/20 09:13
Tag: 
*/
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define rep(i,a,b) for(int i=a; i<=b; i++)
typedef vector<int> vecInt;
typedef vector<ll> vecLong;
int i,j,k;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin>>n;
	int input;
	int five = 0, zero = 0;
	rep(i,1,n)
	{
		cin>>input;
		if(input == 5)
			five++;
		else
			zero++;
	}
	if(zero == 0){
		cout<<"-1";
		return 0;
	}
	input = five / 9;
	rep(i,1,input*9)
	{
		cout<<"5";
	}
	if(input != 0){
		rep(i,1,zero){
			cout<<"0";
		}
	}
	else{
		cout<<"0";
	}
	return 0;
}
