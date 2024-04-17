#include <iostream>
using namespace std;
int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int countFirst = count_even(arr, 5);
    cout  << countFirst << endl;
    int countLast = count_even(arr + 5, 5);
    cout << countLast << endl;
    return 0;
}
