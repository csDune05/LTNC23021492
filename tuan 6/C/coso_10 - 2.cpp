#include <iostream>
#include <cmath>
using namespace std;
void he2(int n){
    int i =0;
    int hecoso2[32];
    while(n>0){
        hecoso2[i] = n%2;
        n /= 2;
        i++;
    }
    for(int j=i-1; j>=0; j--){
        cout<<hecoso2[j];
    }
}
int he10(int n){
    int res = 0;
    int i = 0;
    int t;
    while(n!=0){
        t = n%10;
        n = n/10;
        res += t*pow(2, i);
        i++;
    }
    return res;
}
int main(){
    cout<< "nhap so he co so 10: ";
    int n;
    cin>>n;
    cout<< "so "<<n<< " trong he co so 2 la: ";
    he2(n);
    cout<<endl;

    cout<< "nhap so he co so 2: ";
    cin>>n;
    cout<< "so "<<n<< " trong he co so 10 la: "<<he10(n)<<endl;
    return 0;
}
