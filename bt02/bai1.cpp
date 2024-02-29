#include <bits/stdc++.h>
using namespace std;
string prime(int n){
    string l ="yes";
    if(n<=2) l = "no";
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            l = "no";
            break;
        }
    }
    return l;
}
int main(){
    int n;
    cin>>n;

    cout<<prime(n);
    return 0;
}
