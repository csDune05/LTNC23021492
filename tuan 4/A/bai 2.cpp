#include <iostream>
#include <cstring>
using namespace std;

const int N = 4;
char str1[N];

int main() {
    // char a[N] = "abcd"; loi bien dich

    char b[] = "abcd";
    for (int i = 0; i < sizeof(b); i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << b <<endl;

    int length = strlen(b);
    cout << length <<endl;

    char c[] = "abcdef";
    for (int i = 0; i < sizeof(c); i++) {
       cout << c[i] << " ";
    }
    cout << endl;
    cout << c <<endl;

    length = strlen(c);
    cout << length << endl;
    int maxLength = N - 1;
    cout  << maxLength << endl;

    return 0;
}
