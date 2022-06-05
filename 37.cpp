#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;

int main()
{
	int q; cin>>q;
	while(q--){
		lli n,count=0;
		cin>>n;
		if(n==1) cout<<count<<endl;
		else{
			while(1){
				while(n%2==0){
					n=n/2;
					count++;
				}
				while(n%3==0){
					n=(2*n)/3;
					count++;
				}
				while(n%5 == 0){
					n= (4*n)/5;
					count++;
				}
				if(n==1){
					cout<<count<<endl;
					break;
				}
				else{
					if(n%2!=0 && n%3!=0 && n%5!= 0){
						cout<<"-1"<<endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}








