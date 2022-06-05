#include<bits/stdc++.h>
using namespace std;


int main() {
    int tc;
    long long a, b, c, d;
    cin >> tc;
    while (tc--) {
        cin >> a >> b >> c >> d;
        if (a <= b) cout << b << endl;
        else {
            if (c <= d) cout << "-1\n";
            else {
                long long dif = c - d;
                long long cnt = (a - b) / dif;
                cnt += ((a - b) % dif > 0);
                cout << b + cnt * c << endl;
            }
        }
    }
	return 0;
}

