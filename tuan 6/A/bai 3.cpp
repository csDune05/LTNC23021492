#include <iostream>
using namespace std;
void passByValue(int x) {
    cout << "dia chi cua x truyen bang tham tri: " << &x << endl;
    x = 1;
}
void passByReference(int& x) {
    cout << "dia chi cua x truyen bang tham chieu: " << &x << endl;
    x = 2;
}

int main() {
    int n = 0;
    cout << "dia chi cua n: " << &n << endl;

    passByValue(n);
    cout << "gia tri n truyen bang tham tri: " << n << endl;

    passByReference(n);
    cout << "gia tri n truyen bang tham chieu: " << n << endl;
    // Khi truyền tham số bằng giá trị, một bản sao của biến được tạo ra trong hàm và có một địa chỉ khác nhau so với biến gốc.
    // Khi truyền tham số bằng tham chiếu, biến được truyền trực tiếp và có cùng địa chỉ với biến gốc.
    return 0;
}
