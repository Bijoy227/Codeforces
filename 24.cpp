#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,x,count=0,sum=0;
		cin>>n;
		vi vec;
		for(int i=0;i<n;i++){
			cin>>x;
			vec.push_back(x);
			if(vec[i]==0){
				vec[i]=1;
				count++;
			}
			sum+=vec[i];
		}
		
		if(sum!=0) printf("%d\n",count);
		else{
			printf("%d\n",count+1);
		}
	}
	return 0;
}
