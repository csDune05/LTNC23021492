#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // lỗi vì c không được khởi tạo bằng cấp phát new char ... nên việc sử dụng delete là không hợp lệ
    cerr << "a after deleting c:" << "-" << a << "-" << endl;

    return 0;
}
