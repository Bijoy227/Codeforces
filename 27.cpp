#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;

int main()
{
	int T;
	cin>>T;
	while(T--){
		string s;
		cin>>s; int len=s.length();
		if(s[len-1]=='o' && s[len-2]=='p'){
			cout<<"FILIPINO"<<endl;
		}
		else if((s[len-1]=='u' && s[len-2]=='s' && s[len-3]=='e' && s[len-4]=='d') || (s[len-1]=='u' && s[len-2]=='s' && s[len-3]=='a' && s[len-4]=='m')){
			cout<<"JAPANESE"<<endl;
		}
		else{
			cout<<"KOREAN"<<endl;
		}
	}
	return 0;
}
