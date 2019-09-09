#include<iostream>
using namespace std;
int main()
{
    unsigned  int t;
    cin>>t;
    if(t==0)
    return 0;
    unsigned long int n;
    
    while(t--)
    {
        unsigned long int n,f_1=0,f_2=1,d[100000];

    cin>>n;
    if(n==0)
    break;
    d[0]=f_1;
    d[1]=f_2;
    for(int i=2;i<=n;i++)
    {
        d[i]=f_1+f_2;
        f_1=f_2;
        f_2=d[i];
        
    }
    for(int i=0;i<n;i++)
    {
        d[i]%=10;
    }
    for(int i=0;i<n;i++)
    {
        cout<< d[i]<< " ";
    }
    
    int size=n;
    while(size>1)
    {
        int e[size/2],j=0;
        for(int i=1;i<size;i++)
        {
            if(i%2!=0)
            {
                e[j]=d[i];
                j++;
            }
            
        }
                                                                                                                                             
 cout<<"\nThis Loop Result:";
        size = size/2;
        for(int i=0;i<size;i++)
        {
            d[i]=e[i];
            cout<<d[i]<<" ";
        }
        //size=size/2;
    }
    
        cout<<"\nOutput: "<<d[0];

    }
    return 0;
        
    }    
        
