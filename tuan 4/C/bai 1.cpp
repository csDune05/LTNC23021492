#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], b[10000] = {};
    for(int i =0; i<n; i++){
        cin>>a[i];

    }
    for(int i = 0; i<n; i++){
        b[a[i]] ++;
    }
    for(int i =0; i<10000; i++){
        if(b[i] >= 2){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
