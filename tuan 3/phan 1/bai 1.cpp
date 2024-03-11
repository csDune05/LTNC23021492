#include <iostream>
using namespace std;
struct Point {
    int x,y;
};
void print(Point p) {
    cout << "(" << p.x << ", " << p.y << ")";
}
int main() {
    int x, y;
    cin>>x>>y;
    Point point = {x,y};
    print(point);
    return 0;
}
