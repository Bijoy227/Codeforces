/*
 * Author: Bijoy Chandra Nath
 * Date: 
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i;
	cin>>n>>m;
	int input[n+3];
	double preRatio=0.0;
	double mDouble = m/1.0;
	int ans;
	for(i=1;i<=n;i++)
	{
		cin>>input[i];
		double inputDouble = input[i]/1.0;
		double ratio = ceil(inputDouble/mDouble);
		if(ratio>=preRatio)
		{
			ans = i;
			preRatio = ratio;
		}
	}
	cout<<ans<<endl;
	return 0;
}


//
