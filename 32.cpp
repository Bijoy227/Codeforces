        #include <bits/stdc++.h>
        using namespace std;
         
         
        int main()
        {
        	int t;
        	cin>>t;
         
        	int b,p,f;
         
        	for(int i=0;i<t;i++)
        	{
        		int profit=0;
        		int h,c;
        		cin>>b>>p>>f;
        		cin>>h>>c;
         
        		if(h>c)
        		{
        			if(b>=2*p)
        			{
        				profit+=h*p;
        				b-=2*p;
        				b/=2;
        				if(b>=f)
        					profit+=c*f;
        				else
        					profit+=b*c;
        			}
        			else
        			{
        				b/=2;
        				profit+=h*b;
        			}
        			
        		}
        		else
        		{
        			if(b>=2*f)
        			{
        				profit+=c*f;
        				b-=2*f;
        				b/=2;
        				if(b>=p)
        					profit+=h*p;
        				else
        					profit+=b*h;
        			}
        			else
        			{
        				b/=2;
        				profit+=b*c;
        			}
        			
        		}
         
        		cout<<profit<<endl;
        	}
        }
