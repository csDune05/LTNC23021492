#include <iostream>
#include <cmath>

using namespace std;
int cach1(double n){
    if(n - floor(n) > 0.5) return ceil(n);
    else return floor(n);
}
int cach2(double n){
    int a = n;
    if(n - a > 0.5) return a+1;
    else return a;
}
int main(){
    double n;
    cin>>n;
    cout<<"lam tron theo cach 1: "<<cach1(n)<<endl;
    cout<<"lam tron theo cach 2: "<<cach2(n)<<endl;
    return 0;
}
