#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--) {
		string in
		cin>>in;

		int a=0, b=0;
		for(int i=0; i<in.size(); i++) {
			if(in[i] == '0')
				a++;
			else
				b++;
		}

		int temp = min(a,b);
		if(temp % 2)
			printf("DA\n");
		else
			printf("NET\n");
	}
	return 0;
}