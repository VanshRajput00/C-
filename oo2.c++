#include <iostream>
using namespace std;

class abc {
    int a;
    int b;
public:
    void set(int x, int y) {
        a = x;
        b = y;
    }

    void display() const {
        cout << a << " " << b << endl;
    }
    friend abc operator+(const abc& ob1, const abc& ob2);
};
abc operator+(const abc& ob1, const abc& ob2) {
    abc t3;
    t3.a = ob1.a + ob2.a;
    t3.b = ob1.b + ob2.b;
    return t3;
}

int main() {
    abc ob1, ob2, ob3;
    
    ob1.set(5, 5);
    ob2.set(10, 10);
    ob3.set(20, 20);
    
    ob1.display();
    ob2.display();
    ob3.display();
    abc result = ob1 + ob2 + ob3;
    result.display();
    
    return 0;
}
