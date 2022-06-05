#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n,d,x;
		cin>>n>>d;
		vi vec;
		for(int i=0;i<n;i++){
			cin>>x;
			vec.push_back(x);
		}
		int j=vec[0];
		for(int i=1;i<n;i++){
			while(d>=i){
				if(vec[i] > 0){
					vec[i]--;
					d = d-i;
					j++;
				}
				else{
					break;
				}
			}
		}
		cout<<j<<endl;
	}
	return 0;
}
