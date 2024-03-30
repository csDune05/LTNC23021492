#include <iostream>
#include <cstring>
using namespace std;

void diachiMang(int arr[]){
    cout<<"dia chi cua mang la: "<< arr <<endl;
}
void diachiString( string str){
    cout<<"dia chi cua string la: "<<&str<<endl;
}
int main(){
    int arr[] = {1, 2, 3};
    cout<<&arr<<" ";
    diachiMang(arr);
    string str = "abc";
    cout<<&str<<" ";
    diachiString(str);
    return 0;
}
// Mảng được truyền theo cơ chế pass-by-value.
// String trong C++ được truyền theo cơ chế pass-by-reference.
