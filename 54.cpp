/*Author : Bijoy Chandra Nath
Problem Name: Dima & Friends
Tag: Math *1000
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
	
	int friends;
	scanf("%d", &friends);
	int totalFinger=0;
	for(int i=0;i<friends;i++)
	{
		int finger;
		cin>>finger;
		totalFinger+=finger;
	}
	friends++;
	for(int i=1;i<=5;i++)
	{
		int temp = totalFinger+i;
		if(temp%friends != 1) //there is a problem here, I dont know what!!!!
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}






