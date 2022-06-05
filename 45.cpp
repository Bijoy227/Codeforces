#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define pb push_back
#define mk make_pair
#define repeat(i,a,b) for(int i=a;i<=b;i++)  /*i is the iterator, a is the staring value of i and b is endvalue of i */											
#define SQ(a) (a)*(a)

typedef long long ll;
typedef vector<int> vecInt;
typedef pair<int,int> pairInt;
typedef vector<pair<int,int> > vpi;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		string input;
		cin>>input;
		int a = n;
		input[a]="";
		ll count=0; int i=0;
		while(i<n){
			if(input[i]=='(' & input[i+1]==')'){
				i=i+2;
			}
			else{
				if(i<n/2){
					if(input[i]==')'){
						count++;
						swap(input[i], input[a]);
						input[a++]="";
					}
				}
				else if(i>=n/2){
					if(input[i]=='('){
						count++;
						swap(input[i], input[0]);
					}
				}
				i++;
			}
		}
	}
	return 0;
}

