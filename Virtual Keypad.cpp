#include<iostream>
#include<cstring>
using namespace std;
string table[] = { "", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void recursive(int i,char *a,char *b,int j)
{
    if(a[i]=='\0')
    {
        b[j]='\0';
        cout<<b<<endl;
        return;
    }
    int z=(int)a[i]-48;
    if(z==0)
    {   b[i]=' ';
        recursive(i+1,a,b,j+1);
        //return;
    }
    for(int k=0;table[z][k]!='\0';k++)
    {
        b[j]=table[z][k];
        recursive(i+1,a,b,j+1);
    }
    return;
}
int main()
{
    char a[12];
    char b[12];
    cin>>a;
    int z=strlen(a);
    a[z]='\0';
    recursive(0,a,b,0);
   // mobileKeypad(a,b,0,0);
    return 0;
}
