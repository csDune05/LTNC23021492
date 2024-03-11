#include <iostream>
using namespace std;
struct Point {
    int x,y;
};
int main() {
    int x, y;
    cin>>x>>y;
    Point p = {x,y};
    cout<<&p.x <<" "<< &p.y<<endl;
    cout<<&p;
    return 0;
}

#nhận xét: địa chhir biến y luôn liền kề và lớn hơn biến x , địa chỉ p trùng với x vì x là trường đầu tiên trong cấu trúc của p

