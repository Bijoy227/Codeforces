    #include <iostream>
     
    using namespace std;
     
    int main()
    {
      int n;
      cin>>n;
      int sol=1;
      for (int i=2;i<=n;i++)
        sol+=4*(i-1);
      cout<<sol<<endl;
    }
