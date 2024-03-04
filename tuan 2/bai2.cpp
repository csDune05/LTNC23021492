#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        for(int j=n-1-i; j<n; j++){
            cout<<" ";
        }
        for(int m = i; m<n; m++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
