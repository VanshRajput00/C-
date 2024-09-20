#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Rectangle {
private:
    int x, y, width, height;
public:
   
    Rectangle(int x, int y, int width, int height) : x(x), y(y), width(width), height(height) {}
    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    int getWidth() const {
        return width;
    }

    int getHeight() const {
        return height;
    }

    string toString() const {
        return "Rectangle[x=" + to_string(x) + ",y=" + to_string(y) + ",width=" + to_string(width) + ",height=" + to_string(height) + "]";
    }
};

int main() 
{
    Rectangle rect(1, 2, 3, 4);

    cout << "Rectangle coordinates: (" << rect.getX() << ", " << rect.getY() << ")" << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Height: " << rect.getHeight() << endl;
    cout << "Rectangle: " << rect.toString() << endl;

    return 0;
}
