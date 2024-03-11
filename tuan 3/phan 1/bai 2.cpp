#include <iostream>
using namespace std;
struct Point {
    int x, y;
};
void modifyPointByValue(Point p) {
    p.x = 5;
    p.y = 10;
}
void modifyPointByReference(Point& p) {
    p.x = 5;
    p.y = 10;
}
void print(Point p) {
    cout << "(" << p.x << ", " << p.y << ")";
}
int main() {
    Point point;

    point.x = 0;
    point.y = 0;
    print(point);
    cout<<endl;

    // Truyền tham trị
    modifyPointByValue(point);
    print(point);
    cout<<endl;

    // Truyền tham biến
    modifyPointByReference(point);
    print(point);
    return 0;
}
