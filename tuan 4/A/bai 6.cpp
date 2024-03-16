#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
int main() {
    const int N = 30;
    int arr[N];

    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
