#include <iostream>
using namespace std;
int main(){
    int a[3] = {1, 2, 4};
    char b[3] = {'a', 'b', 'd'};
    for(int i =0; i<3; i++){
        cout<<&a[i]<<" ";
    }
    cout<<endl;
    for(int i =0; i<3; i++){
        cout<<(void *)&b[i]<<" ";
    }
    return 0;
}

// nhan xet: cac dia chi phan tu a co kich thuoc tang dan cua kieu int con cua b laf theo kieu char
