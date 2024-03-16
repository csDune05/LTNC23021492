#include <iostream>
using namespace std;

int main() {
    char arr[5];
    char var1, var2, var3;
    for (int i = 0; i < 5; i++) {
        arr[i] = 'A' + i;
    }
    var1 = 'X';
    var2 = 'Y';
    var3 = 'Z';

    cout << arr[-1] << endl;
    cout << arr[5] << endl;
    cout  << arr[6] << endl;

    cout << endl;
    cout << "var 1: " << var1 << endl;
    cout << "var 2: " << var2 << endl;
    cout << "var 3: " << var3 << endl;

    arr[-1] = 'M';
    arr[5] = 'N';
    arr[6] = 'O';
    cout << "var 1: " << var1 << endl;
    cout << "var 2: " << var2 << endl;
    cout << "var 3: " << var3 << endl;

    char arr2D[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            arr2D[i][j] = 'A' + i + j;
        }
    }

    arr2D[0][5] = 'X';
    arr2D[1][5] = 'Y';
    arr2D[2][5] = 'Z';

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
