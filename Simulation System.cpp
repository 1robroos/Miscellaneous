#include<bits/stdc++.h>
using namespace std;
struct V3{
    double x,y,z;
    double length(V3const&a)
    {
        return sqrt(x*x+y*y+z*z);
    }
    V3 sum(V3const&a,V3const&b){
        V3 v;
        v.x=x+a.x;
        v.y=y+b.y;
        v.z=z+c.z;
        return v;
    }

    V3 scale(V3const&a,double const&factor)
    {
        V3 v1;
        v1.x=a.x*factor;
        v1.y=b.y*factor;
        v1.z=c.z*factor;
        return v1;

    }
    void print()
    {
        cout<<"x:"<<x<<"y:"<<"z:"<<z<<endl;
        return ;

    }


}
int main()
{
    V3 vel,acc,pos;
    V3 currDispl,currPos;
    double t=0.0,deltaT,totalT;
    cout<<"Give x,y and z components of initial velocity \n";
    cin>>vel.x>>vel.y>>vel.z;
    cout<<"Give x,y and z componets of accelartion \n";
    cin>>acc.x>>acc.y>>acc.z;
    cout<<"Give x,y and z components of position \n ";
    cin>>pos.x>>pos.y>>pos.z;
    cout<<"Given total ssimulation time:";
    cin>>totalT;
    cout<<"Given simulation time granularity:";
    cin>>deltaT;
    if((totalT<0)||(deltaT<=0)){
        cout<<"Invalid output!"<<endl;
        return -1;

    while(t<=totalT)
    {
        currDispl=(vel.scale(t).sum(acc.scale(0.5*t*t));
        currPos=currDispl.sum(pos);
        cout<<"Time "<<t<<" ";
        currPos.print();
        t=t+deltaT;
)
    }
        return 0;

    }


}
