#include <iostream>
using namespace std;
int* taocontro() {
    int biendiaphuong = 5;
    int* ptr = &biendiaphuong;
    return ptr;
}

int main() {
    int* p = taocontro();
    cout << *p << endl;
    // p ddang trỏ đến một biến địa phương đã bị hủy nên lỗi
    delete dynamicPointer;
    // giải phóng bộ nhớ của 1 biến địa phương --> lỗi
    return 0;
}
