#include <iostream>
#include <cmath>
using namespace std;

class abc{
    int a,b;
    public:
    void set (int x,int y){
        a=x;
        b=y;
    }
    void sum(int x, int y){
        a=a+x;
        b=b+y;
    }
    void display(){
        cout<<a<<"and"<<b;
    }
    friend abc add(abc,abc);
};

abc add(abc t1, abc t2){
    abc t3; //object
    t3.a=t1.a+t2.a;
    t3.b=t1.b+t2.b;
    return t3; // return object
}
int main(){
    abc ob1;
    ob1.set(5,10);
    ob1.sum(2,3);
    abc ob2;
    ob2.set(10,20);
    abc ob3;
    ob3= add(ob1,ob2);
    ob3.display();

}