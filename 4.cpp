/*
Problem Name : Expression & Stairs (CF Round #479 Div 2)
Tag : Brute Force,Math *1000 
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
    for (int i = b + 1; i <= a + b + 1; ++i) cout << i << ' ';
    
	for (int i = b; i >= 1; --i) cout << i << ' ';
    cout <<endl;
    return 0;
}
