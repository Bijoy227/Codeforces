#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,m,k,points = 0;             //n = total_cards  m = jokar  k = players
		cin>>n>>m>>k;
		
		if(m==0){
			points = 0;
		}
		else{
			int x = n / k;
			
			if(x>=m){
				points = m;
			}
			else{
				k--;
				m = m-x;
				float t = k/1.0;
				float y = ceil(m/t);
				points = x - y;
			}
		}
		cout<<points<<endl;
	}
	
	return 0;
}
