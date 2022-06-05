/*
Author: Bijoy Chandra Nath
Time : 26/07/20 07:06
Id : CF GCD Compression
*/

#include<bits/stdc++.h>
long long x,y,test,n,i,j,h,k,t,d,m,a[2000005],b[2000005],f[2000005];
using namespace std;
int main()
{
	cin>>test;
    for(h=1;h<=test;h++)
    {
	    cin>>n;
        x=0;
        y=0;
		d=0;
        for(i=1;i<=2*n;i++)
        {
            cin>>k;
            if (k%2==0)
            {
                x++;
                a[x]=i;
                if (x%2==0&&d<n-1) cout<<a[x]<<' '<<a[x-1]<<endl,d++;
            }
        	else
            {
                y++;
                b[y]=i;
                if (y%2==0&&d<n-1) cout<<b[y]<<' '<<b[y-1]<<endl,d++;
            }
        }
    }
    return 0;
}
