#include <iostream>
#include <cstring>

using namespace std;

struct Array {
    int numbers[5];
};
int main() {
    Array arr1;
    arr1.numbers[0] = 0;
    arr1.numbers[1] = 1;
    arr1.numbers[2] = 2;
    arr1.numbers[3] = 3;
    arr1.numbers[4] = 4;

    Array arr2 = arr1;

    cout << "arr1.numbers: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1.numbers[i] << " ";
    }
    cout << endl;

    cout << "arr2.numbers: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2.numbers[i] << " ";
    }
    cout << endl;

    // Thay đổi giá trị trong mảng arr2
    arr2.numbers[0] = 10;

    cout << "arr1.numbers: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1.numbers[i] << " ";
    }
    cout << endl;

    cout << "arr2.numbers: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2.numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
