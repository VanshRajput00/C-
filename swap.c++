#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
class abc{
    public:
    int a,b;
    void set(int x, int y){
        a=y;
        b=x;
    }
    void swap(){
        cout<<a<<" "<<b;
    }
};
int main(){
abc ob1;
ob1.set(10,2);
ob1.swap();

return 0;
}
