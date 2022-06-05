    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	long long n, count_one = 0, count_zero = 0;
    	cin>>n;
    	char s[n];
    	for(int i = 0; i < n; i++){
    		cin>>s[i];
    		if(s[i] == 'z'){
    			count_zero++;
    		}
    		if(s[i] == 'n'){
    			count_one++;
    		}
    	}
    	for(int i = 0; i < count_one; i++){
    		cout<<"1 ";
    	}
    	for(int i = 0; i < count_zero; i++){
    		cout<<"0 ";
    	}
    	return 0;
    }
