#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,max=1;
		cin>>n;
		int gran[n];
		for(int i=0;i<n;i++){
			cin>>gran[i];
		}
		sort(gran, gran+n);
		for(int i = n-1;i>=0;i--){
			if(gran[i] <= i+1){
				max = i+2;
				break;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
