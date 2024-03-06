#include <iostream>

using namespace std;

void printMatrix(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num = (i + j) % n + 1;
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printMatrix(n);
    return 0;
}