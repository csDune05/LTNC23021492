#include <iostream>
using namespace std;
const int N = 4;
int arr1[N];
int main() {
    int a[N] = {1, 2, 3, 4};
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int b[] = {1, 2, 3, 4};
    for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    int c[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    int d[4];
    for (int i = 0; i < N; i++) {
        cout << d[i] << " ";
    }
    cout << endl;

    return 0;
}
