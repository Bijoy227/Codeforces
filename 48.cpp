/*Author : Bijoy 
Problem Name: Buggy Robot
Tag:  Greddy *1000
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<int> vecInt;
typedef vector<ll> vecLong;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n,x=0,y=0;
	cin>>n;
	string s;
	cin>>s;
	int max=0;
	for(int i=0;i<n;i++){
		if(s[i]=='U') y++;
		else if(s[i]=='D') y--;
		else if(s[i]=='L') x--;
		else x++;
	}
	
	cout<<n;
	return 0;
}
