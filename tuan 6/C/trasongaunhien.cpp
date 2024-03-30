#include <iostream>
using namespace std;
int songaunhien(int n){
    return rand() % n;
}
int main(){
    int n;
    cin>>n;
    cout<<songaunhien(n);
    return 0;
}
