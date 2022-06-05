    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	long long l,r;
    	cin>>l>>r;
    	set<int> s;
    	for(int i = l; i<=r; i++){
    	    int temp = i;
    	    int length = 0;
    	    while(temp>0){
    	        int re = temp%10;
    	        s.insert(re);
    	        length++;
    	        temp = temp/10;
    	    }
    	    
    	    if(s.size() == length){
    	        cout<<i<<endl;
    	        return 0;
    	    }
    	    s.clear();
    	}
    	cout<<"-1"<<endl;
    	return 0;
    }


