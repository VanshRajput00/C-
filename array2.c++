#include <iostream>
using namespace std;

int main() {
      int myArray[] = {20, 25, 15, 24, 21, 18, 14, 16};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    for (int i = 0; i < size; i++) {
        bool hasLarger = false;
        for (int j = i + 1; j < size; j++) {
            if (myArray[j] > myArray[i]) {
                hasLarger = true;
                break;
            }
        }

        if (!hasLarger) {
            cout << myArray[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
