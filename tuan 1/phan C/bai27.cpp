#include<bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        int n;
        cin>>n;
        if(n == -1){
            cout<<"Bye";
            break;
        }
        int x = (n >= 0 && n % 5 == 0) ? n / 5 : -1;
        cout<<x<<endl;
    }
    return 0;
}
