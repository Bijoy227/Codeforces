Not Solved....!!!

#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef vector<int> vi;
typedef vector<char> ci;

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n; char x;
		cin>>n;
		ci charVector;
		for(int i=0;i<n;i++){
			cin>>x;
			charVector.push_back(x);
		}
		int i=0,result=0;
		while(1){
			if(charVector[i]=='A'){
				charVector.pop_back();
				if(charVector.empty()) break;
				int count=0;
				while(1){
					if(charVector[i]=='P'){
						count++;
						charVector.pop_back();
						if(charVector.empty()) break;
					}
					else{
						if(result<=count){
							result=count;
							break;
						}
					}
				}
			}
			else{
				charVector.pop_back();
				if(charVector.empty()) break;
			}
		}
		cout<<result<<endl;
	}
	return 0;
}

