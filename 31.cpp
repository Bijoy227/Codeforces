

    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	long long a,b,c,d;
    	cin>>a>>b>>c>>d;
    	if(a+b==c+d||a+c==b+d||a+d==c+b||a+b+c==d||a+b+d==c||a+c+d==b||a+b+c+d==0||b+c+d==a)cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    	return 0;
    }
