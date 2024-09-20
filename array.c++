#include <iostream>
using namespace std;

int main() {
    int myArray[5];

    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;
    
    cout << "The values in the array are: ";
    for(int i = 0; i < 5; i++) {
        cout << myArray[i] << " ";
    }
    
    cout << endl;

    return 0;
    
}
