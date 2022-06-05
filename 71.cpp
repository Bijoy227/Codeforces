//Author : 
//Problem Name: 
//Tag:

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define FOR(i,a,b) for(int i=a;i<=b;i++)
typedef vector<int> vecInt;
typedef vector<long long> vecLong;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long i,j,k;
	long long t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;
        long long inputArray[n];
        
        for(i=0;i<n;i++) {
        	cin>>inputArray[i];
		}

        for(i=0;i<n-1;i++) {
            while(inputArray[i] > 0) {
                for(j=i+1;j<n;j++) {
                    if(inputArray[j] < 0) {
                        int temp = min(inputArray[i], abs(inputArray[j]));
                        inputArray[i] = inputArray[i] - temp;
                        inputArray[j] = inputArray[j] + temp;
                    }

                    if(inputArray[i] == 0)
                        break;
                }
            }
        }
        long long sum = 0;
        for(i=0;i<n;i++) {
            sum += abs(inputArray[i]);
        }

        cout<<sum/2<<endl;
    }
	return 0;
}
