#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if (t==0)
    return 0;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        string a;
        string b;
       while(n--)
       {
           cin>>a;
           cin>>b;


          if(a==b)
          {
              cout<<"Case #"<<t+1<<":"<<"No";

          }

          else
          {
              cout<<"Case #"<<t+1<<":"<<"Yes";
          }


       }



    }
    return 0;
}
