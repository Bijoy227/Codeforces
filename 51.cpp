/*
Author : Bijoy Chandra Nath
Created : 25/07/20 10:57
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    
}

int main() {
    int t; 
	scanf("%d", &t);
    while(t--)
	{
	    int n;
		scanf("%d", &n);
		
		vector<int> a(n), b(n);
	    vector<int> good(2, 0);
	    
		int i;
		for (i=0; i<n; i++)
	        scanf("%d", &a[i]);
	    
	    for (i=0; i<n; i++)
	        scanf("%d", &b[i]);
	    
	    bool flag=true;
	    for (i=0; i<n; i++)
		{
	        if(a[i] > b[i] && !good[0])
			{
	            printf("NO\n");
	            flag=false;
	            break;
	        } 
			else if (a[i] < b[i] && !good[1]) 
			{
	            printf("NO\n");
	            flag=false;
	            break;
	        }
	        if (a[i] == -1)
				good[0] = 1;
	        if (a[i] == 1)
				good[1] = 1;
	    }
	    if(flag)
			cout << "YES\n";
	}
	return 0;
}
