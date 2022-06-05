#include<bits/stdc++.h>
using namespace std;

/*int main()
{
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, m;
		scanf("%d %d", &n, &m);

		int in[2][2] = {0};
		bool canMake = false;
		bool fullMake = false;
		for(int i=0; i<n; i++) {
			for(int j=0; j<2; j++) {
				for(int k=0; k<2; k++) {
					scanf("%d", &in[j][k]);
				}
			}
			if((in[0][0] == in[1][1]) || in[0][1] == in[1][0])
				canMake = true;

			if(in[0][0] == in[0][1] == in[1][0] == in[1][1])
				fullMake = true;
		}

		if((m*m)%4 != 0 || m==1)
			printf("NO\n");
		else{
			if(m==2 && fullMake == true)
				printf("YES\n");
			else{
				if(m==2 && fullMake == false)
					printf("NO\n");
				if(canMake == true && m > 2)
					printf("YES\n");
			}
		}
	}
	return 0;
}
*/

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n,m;
        scanf("%d %d", &n, &m);

        int leftTop, leftBottom, rightTop, rightBottom;
        bool canMake = false;
        
        for(int i=0; i<n; i++) {
          scanf("%d %d %d %d", &leftTop, &rightTop, &leftBottom, &rightBottom);
          if(rightTop == leftBottom)
          	canMake = true;
        }

        if(canMake == false|| m%2)
        	printf("NO\n");
        else 
        	printf("YES\n");
    }
    return 0;
}



