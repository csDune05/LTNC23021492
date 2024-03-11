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
    Rect rect1 = {x, y, width, height};
    string id;
    cin>> id;
    int dx, dy;
    cin>>dx >>dy;
    Ship ship1 = {rect1, id, dx, dy};

    cin>>x >>y >>width >>height;
    Rect rect2 = {x, y, width, height};
    cin>> id;
    cin>>dx >>dy;
    Ship ship2 = {rect2, id, dx, dy};

    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();

        display(ship1);
        display(ship2);

        loop++;
    }

    return 0;
}
