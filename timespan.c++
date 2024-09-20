#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

class time {
    int hours;
    int min;
public:
    void set(int h, int m) {
        hours = h;
        min = m;
    }
    
    void display() {
        cout << "Time: " << hours << " hours and " << min << " minutes" << endl;
    }

    time sum(time t1, time t2) {
        time t3;
        int min1 = t1.min + t2.min;
        t3.min = min1 % 60;
        int hours1 = min1 / 60;
        t3.hours = hours1 + t1.hours + t2.hours;
        return t3;
    }
};

int main() {
    time t1, t2, t3;
    t1.set(4, 30);
    t2.set(4, 30);
    t3 = t3.sum(t1, t2);
    t3.display();
    return 0;
}
