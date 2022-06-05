#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
int result=100000000;

bool isPrime(int n)
{
	int i;
   	bool isprime = true;
   	
   for (i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
         isprime = false;
         break;
      }
   }
   return isprime;
}

int main()
{
	int n; cin>>n;
	if(isPrime(n)){
		cout<<2*n+2<<endl;
	}
	else{
		int temp, div;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				div = n/i;
				temp=2*(div+i);
				if(temp<=result){
					result=temp;
				}
			}
		}
		cout<<result<<endl;
	}
	return 0;
}
