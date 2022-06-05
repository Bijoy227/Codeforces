#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int arr[n]; bool flag=false; int index;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i] % 2 == 0){
				flag=true;
				index=i+1;
			}
		}
		if(flag){
			cout<<"1"<<endl<<index<<endl;
			continue;
		}
		
		for(int i=0;i<n-1;i++){
			if(arr[i]%2!=0 && arr[i+1] != 0){
				cout<<"2"<<endl;
				cout<<i+1<<" "<<i+2<<endl;
				flag=true;
				break;
			}
		}
		if(!flag) cout<<"-1"<<endl;
	}
	return 0;
}
