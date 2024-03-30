#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateRandomArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 50;
    }
}
void printTripletsDivisibleBy25(int arr[], int n) {
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((arr[i] + arr[j] + arr[k]) % 25 == 0) {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    generateRandomArray(arr, n);
    cout << "Cac bo 3 so nguyen co tong chia het cho 25:\n";
    printTripletsDivisibleBy25(arr, n);
    return 0;
}
