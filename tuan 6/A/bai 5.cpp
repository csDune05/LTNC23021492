#include <iostream>
using namespace std;
int main() {
    int a = 1;
    int& ref = a;

    cout << a << endl;
    cout << ref << endl;

    ref = 10;
    cout << a << endl;

    a = 15;
    cout << ref << endl;
    return 0;
}
//  Biến tham chiếu và biến mà nó chiếu tới là cùng một biến trong bộ nhớ. Khi một biến tham chiếu được khai báo và chiếu tới một biến, thì biến tham chiếu và biến đích sẽ chia sẻ cùng một vùng nhớ.
//  không thể khai báo một tham chiếu mà chưa chiếu ngay nó tới một biến thường. Một tham chiếu phải được khởi tạo cùng lúc với việc khai báo và phải được chiếu tới một biến hợp lệ.
//  một tham chiếu không thể thay đổi đích ban đầu của nó. Khi một tham chiếu được khởi tạo và chiếu tới một biến, thì nó sẽ liên kết với biến đó và không thể thay đổi để chiếu tới một biến khác.
