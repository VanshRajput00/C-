#include <iostream>
#include <cmath>
using namespace std;
class ABC{
    int a;
    public:
    void setvalue(int i){
        a=i;
    }
    friend int main();
};
int main(){
    ABC a1;
    int i;
    cin>>i;
    a1.setvalue(i);
    int ABC::*ip=&ABC::a;

    cout<<a1.*ip;
}