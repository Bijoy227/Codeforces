#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;

int main()
{
	lli n; cin>>n;
	string inp; cin>>inp;
	string a="0000000000";
	for(int i=0;i<n;i++){
		if(inp[i]=='L'){
			int x=0;
			while(1){
				if(a[x]=='0'){
					a[x]='1';
					break;
				}
				else{
					x++;
				}
			}
		}
		else if(inp[i]=='R'){
			int y=9;
			while(1){
				if(a[y]=='0'){
					a[y]='1';
					break;
				}
				else{
					y--;
				}
			}
		}
		else if(inp[i]=='0' || inp[i]=='1' ||inp[i]=='2' || inp[i]=='3'|| inp[i]=='4' || inp[i]=='5'|| inp[i]=='6' || inp[i]=='7' ||inp[i]=='8' || inp[i]=='9'){
			int x1; x1=(int) (inp[i]);
			a[x1-48]='0';
		}
	}
	cout<<a<<endl;
	return 0;
}

