//Author : Bijoy Chandra Nath
//Created : 8:10PM 9/24/2020

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
typedef vector<int> vecInt;
typedef vector<long long> vecLong;
int i,j,k;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		string number;
		cin>>number;

		int odd = 0, even = 0;
		FOR(i, 0, n-1){
			if(i%2 == 0){
				if(number[i] % 2 == 1)
					odd++;
			}
			else{
				if(number[i] % 2 == 0)
					even++;
			}
		}
		if(n%2 == 1)
			cout<<(odd?1:2)<<endl;
		else
			cout<<(even?2:1)<<endl;
	}
	return 0;
}

