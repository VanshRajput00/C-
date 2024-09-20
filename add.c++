#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
class abc
{
    int a,b;
    public:
    void add(); 
    void set(int x, int y);
};
void abc::add()
{
    int c;
    c=a+b;
    cout<<c;
}
void abc::set(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    abc ob1;
    ob1.set(2,3);
    ob1.add();
    
   return 0;
}