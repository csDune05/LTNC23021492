#include <iostream>
using namespace std;
int binarySearch(int* a, int s, int t) {
    int left = 0;
    int right = s - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == t) {
            return mid;
        }
        else if (a[mid] < t) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int a[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int s = sizeof(a) / sizeof(a[0]);

    int t = 12;

    int index = binarySearch(a, s, t);

    if (index != -1) {
        cout <<t << " " << index << endl;
    } else {
        cout << t<<endl;
    }

    return 0;
}
