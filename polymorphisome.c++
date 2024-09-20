#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class Shape {
public:
virtual double volume() const = 0; // Pure virtual function
};
class Sphere : public Shape {
private:
double radius;
public:
    Sphere(double r) : radius(r) {}
    double volume() const override {
     return (1.33) *3.14* pow(radius,3);
 }
};
class Cylinder : public Shape{
private:
double radius;
double height;
public:
    Cylinder(double r,double h) : radius(r),height(h){}
    double volume() const override {
        return 3.14*pow(radius, 2)* height;
}
};
class Cone:public Shape {
private:
    double radius;
    double height;
public:
    Cone(double r,double h) : radius(r),height(h) {}
    double volume() const override {
        return (0.33)* 3.14* pow(radius,2)* height;
}
};
class Cube : public Shape {
private:
double side;
public:
    Cube(double s) : side(s){}
    double volume() const override {
        return pow(side, 3);
    }
};
int main() {
    int choice;
    cin >> choice; 
    if (choice == 1) { 
        double radius;
        cin >> radius;
        Sphere sphere(radius);
        cout << fixed << setprecision(3);
        cout << "Volume of sphere is " << sphere.volume() << endl;
    } 
    else if (choice == 2) { 
        double radius, height;
        cin >> radius >> height;
        Cylinder cylinder(radius, height);
        cout << fixed << setprecision(3);
        cout << "Volume of cylinder is " << cylinder.volume() << endl;
    } 
    else if (choice == 3) {
        double radius, height;
        cin >> radius >> height;
        Cone cone(radius, height);
        cout << fixed << setprecision(3);
        cout << "Volume of cone is " << cone.volume() << endl;
    } 
    else if (choice == 4) { 
        double side;
        cin >> side;
        Cube cube(side);
        cout << fixed << setprecision(3);
        cout << "Volume of cube is " << cube.volume() << endl;
    } 
    else {
        cout << "wrong choice" << endl;
    }
    return 0;
}