#include<iostream>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;

int main()
{
	int n,m;
	cin>>n>>m;
	string first[n], second[m];
	
	for(int i=0;i<n;i++) cin>>first[i];
	for(int i=0;i<m;i++) cin>>second[i];
	
	int q;cin>>q;
	for(int i=1;i<=q;i++){
		lli year;
		cin>>year;
		--year;
		cout<<first[year%n]<<second[year%m]<<endl;
	}
	return 0;
}
