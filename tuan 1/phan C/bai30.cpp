#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = n - 1; i >= 0; i--) {
        for (int k = 0; k < i + 1; ++k) {
            cout << "*";
        }
        for (int j = i + 1 ; j < n; j++) {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}
