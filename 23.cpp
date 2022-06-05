//NOT SOLVED. Problem Name= Erasing Zeros

#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;

int main()
{
	int T;
	cin>>T;
	while(T--){
		string a;
		cin>>a;
		int count=0;
		for(int i=0;i<a.length();i++){
			if(a[i]=='1'){
				int j=i+1;int k=0; bool temp=false;
				while(j<a.length()){
					k++;
					count++;
					j++;
					if(a[j]=='1'){
						temp=true;
						break;
					}
				}
				if(!temp) count-=k;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
