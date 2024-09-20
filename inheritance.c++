#include <iostream>
using namespace std;
class abc
{
    public:
    void display()
    {
        cout<<"Hello World"<<endl;
    }
};
class def:public abc {
    

};
int main(){
    def d;
    d.display();
}

