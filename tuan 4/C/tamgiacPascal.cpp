#include <iostream>
using namespace std;
int combination(int n, int k) {
    if (k == 0 || n == k) {
        return 1;
    } else {
        return combination(n - 1, k - 1) + combination(n - 1, k);
    }
}
void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    printPascalTriangle(n);
    return 0;
}
