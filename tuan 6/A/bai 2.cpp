#include <iostream>
using namespace std;

int factorial(int x){
    cout << "x = " << x << " at " << &x <<endl;
    if(x==0 || x==1) return 1;
    else return x * factorial(x-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
// nhan xet: giá trị của x giảm dần từ n đến 0, địa chỉ của tham số x cũng thay đổi giảm dần
// kích thước của một stack frame cho hàm bao gồm kích thước của biến địa phương x, int frame_size = sizeof(x)
