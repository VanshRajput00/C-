#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
class calculator{
    float sub,add,mul,div;
    public:
    calculator(float a,float b){
        sub=a-b;
        add=a+b;
        mul=a*b;
        div=a/b;
    }
    void display(){
        cout<<"Subtraction is "<<sub<<endl;
        cout<<"Addition is "<<add<<endl;
        cout<<"Multiplication is "<<mul<<endl;
        cout<<"Division is "<<div<<endl;
    }
};

int main(){
    float a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    calculator c(a,b);
    c.display();
    
}