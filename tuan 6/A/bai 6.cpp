#include <iostream>
using namespace std;
void f(int xval) {
    int x;
    x = xval;
    cout << &x << endl;
}
void g(int yval) {
    int y;
    cout << &y << endl;
}

int main() {
    f(4);
    g(5);
    return 0;
}
// địa chỉ x y giống nhau, f() và g() đều có cấu trúc stack frame tương tự và được đặt trên đỉnh của stack của hàm main. Cả hai hàm đều có một tham số kiểu int và một biến địa phương đầu tiên, do đó có khả năng lớn là trình biên dịch đã xếp biến x và y ở cùng một địa chỉ trên stack.
