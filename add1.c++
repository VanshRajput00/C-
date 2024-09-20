#include <iostream>
#include <cmath>
using namespace std;

class abc
{
    int a, b;
public:
    void add(); 
    void set(int x, int y);
};

void abc::add()
{
    int c;
    c = a + b;
    cout << c;
}

void abc::set(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    abc ob1;
    int x, y;
    cin>>x>>y; 
    ob1.set(x, y);
    ob1.add();

    return 0;
}
