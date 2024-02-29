#include <iostream>
using namespace std;
int main(){
    int n = 0;
    int m;
    while(true) {
        cin>>m;
        if(m < 0){
            break;
        }
        if(m != n){
            cout<<m<<" ";
        }
        n = m;
    }
    cout<<m;
    return 0;
}
