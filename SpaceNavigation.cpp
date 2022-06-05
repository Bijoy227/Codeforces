#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        long long int Px, Py;
        scanf("%lld %lld", &Px, &Py);
        string s;
        cin>>s;

        long long int up=0, down=0, left=0, right=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='R') right++;
            else if(s[i]=='U') up++;
            else if(s[i]=='D') down++;
            else left++;
        }

        bool x=false;
        if(Px>=0 && right>=abs(Px))
            x=true;
        if(Px<=0 && left>=abs(Px))
            x=true;
        
        bool y = false;
        if(Py>=0 && up>=abs(Py))
            y=true;
        if(Py<=0 && down>=abs(Py))
            y=true;

        if(x&&y) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}