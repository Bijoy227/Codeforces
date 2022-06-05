#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	int sum;
	while(1){
		int temp=n; sum=0;
		while(temp>0){
			sum+=(temp%10);
			temp=temp/10;
		}
		if(sum%4==0){
			cout<<n<<endl;
			break;
		}
		n++;
	}
	return 0;
}
