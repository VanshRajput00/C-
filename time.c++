#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
class time {
    int hours;
    int min;
    public:
    void set(int h,int m){
        hours=h;
        min=m;
    }
    int sum(time t1,time t2){
int min1=t1.min+t2.min;
int hours1=min1/60;
int h1=hours1+t1.hours+t2.hours;
cout<<"hours"<<" ";
cout<<h1;
    }

};
int main()
{
    time t1,t2,t3;
    t1.set(4,30);
    t2.set(4,30);
    t3.sum(t1,t2);
   return 0;
}