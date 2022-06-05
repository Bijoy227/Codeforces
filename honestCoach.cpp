#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int at,result;
		cin>>at;
		int strn[at];
		int n = sizeof(strn)/sizeof(strn[0]); 
		for(int i= 0; i < at; i++){
			cin >> strn[i];
		}
		sort(strn,strn+n);
		result = strn[1] - strn[0];
		for(int i=0;i<at-1;i++){
			int temp = strn[i+1] - strn[i]; 
			if(temp<=result) result = temp;
		}
		cout<<result<<endl;
	}
	return 0;
}
