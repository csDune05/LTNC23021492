#include <iostream>
using namespace std;
template<typename T, size_t N>
void printArraySize(T (&arr)[N]) {
    cout << "kich thuoc mang trong ham: " << sizeof(arr)<<endl;
}
int main(){
    int a[] = {1, 2, 3};
    cout<<sizeof(a)<<endl;
    printArraySize(a);
    return 0;
}
