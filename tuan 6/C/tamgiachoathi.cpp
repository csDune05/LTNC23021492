#include <iostream>

using namespace std;
void tamgiachoathi(int n){
    for(int i =0; i<=n; i++){
        for(int j = n-i; j>=0; j--){
            cout<<" ";
        }
        for(int k = 0; k<2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    tamgiachoathi(n);
    return 0;
}
