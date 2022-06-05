#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,m,x=0;
		cin>>n>>m;
		vi vec;
		for(int i=0;i<n;i++){
			cin>>x;
			vec.push_back(x);
		}
		lli sum=0;
		for(int i=0;i<vec.size();i++) sum+=vec[i];
		if(m<=sum){
			cout<<m<<endl;
		}
		else{
			cout<<sum<<endl;
		}
	}
	return 0;
}
