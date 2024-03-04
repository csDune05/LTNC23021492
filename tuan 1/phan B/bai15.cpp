#include <bits/stdc++.h>
#include <string>
using namespace std;
string fibonacci(int n) {
    string f0 = "a";
    string f1 = "b";
    if (n == 0)
        return f0;
    if (n == 1)
        return f1;
    string f;
    for (int i = 2; i <= n; i++) {
        f = f1 + f0;
        f0 = f1;
        f1 = f;
    }
    return f;
}
int main() {
    for (int i = 0; i <= 10; i++) {
        string result = fibonacci(i);
        cout << "f(" << i << "): " << result << endl;
    }

    return 0;
}
