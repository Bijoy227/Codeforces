/*
Problem Name : Dreamoon & Stairs (CF Round #272 Div 2)
Tag : Implimentation,Math *1000 
*/

#include<bits/stdc++.h>
using namespace std;

int moves[10000007];

int main()
{
	int n,m,step;
	cin>>n>>m;
	
	int mini_step=n/2;		//minimum step
	moves[0] = mini_step;
	
	for(int i=1;i<=n/2;i++){
		step=(mini_step-i) + 2*i;
		moves[i]=step;
	}
	
	if(n%2!=0){
		for(int i=0;i<=n/2;i++) moves[i]++;
	}
	int flag=1;
	for(int i=0;i<=n/2;i++){
		if(moves[i] % m == 0){
			cout<<moves[i]<<endl;
			flag=0;
			break;
		}
	}
	if(flag) cout<<"-1"<<endl;
	//for(int i=0;i<=n/2;i++) cout<<moves[i]<<endl;
	return 0;
}
