#include <iostream>
#include <string>
using namespace std;

struct Rect {
    int x, y;
    int width, height;
};
struct Ship {
    Rect rect;
    string id;
    int dx, dy;
    void move() {
        rect.x += dx;
        rect.y += dy;
    }
};
void display(const Ship& ship) {
    cout << "So hieu tau: " << ship.id << endl;
    cout << "Toa do: (" << ship.rect.x << ", " << ship.rect.y << ")" << endl;
}

int main() {
    int x, y, width, height;
    cin>>x >>y >>width >>height;
    Rect rect = {x, y, width, height};
    string id;
    cin>> id;
    int dx, dy;
    cin>>dx >>dy;

    Ship ship = {rect, id, dx, dy};;

    display(ship);

    cout << "Di chuyen\n";
    ship.move();

    display(ship);

    return 0;
}
