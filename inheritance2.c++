#include <iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
    void sleep() {
        cout << "I can sleep!" << endl;
    }
};
class Dog : public Animal {
public:
};

int main() {
    Dog myDog;
    myDog.eat();
    myDog.sleep();
}
