#include <iostream>
using namespace std;
struct Point {
    int x, y;
};

struct Rect {
    int x, y;
    int width, height;
    bool contains(const Point& p) const {
        return (p.x >= x && p.x <= x + width && p.y >= y && p.y <= y + height);
    }
};
int main() {
    int a, b, c, d;
    cin>>a >>b >>c >>d;
    Rect rect = {a, b, c, d};
    int x, y;
    cin>>x >>y;
    Point point = {x, y};
    cout<<(rect.contains(point));
    return 0;
}
