#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, an=0;
	cin>>n;
	string a;
	cin>>a;
	set<int> r;
	for(int i=0;i<n;i++){
		if(a[i]>='A' && a[i]<='Z'){
			r.clear();
		}
		else{
			r.insert(a[i]);
			an = max(an,(int)r.size());
		}
	}
	cout<<an;
	return 0;
}
