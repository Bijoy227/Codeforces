#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;

int main()
{
	int n,x;
	cin>>n;
	vi vec;
	for(int i=0;i<n;i++){
		cin>>x;
		vec.push_back(x);
	}
	sort(vec.begin(), vec.end());
	int result=0;
	for(int i=0;i<n;i++){
		x=vec[i];
		if(x!=0){
			for(int j=0;j<n;j++){
				if(vec[j] % x == 0){
					vec[j]=0;
				}
			}
			result++;
		}
	}
	cout<<result<<endl;
	return 0;
}
