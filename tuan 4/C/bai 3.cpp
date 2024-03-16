#include <iostream>
using namespace std;
bool sodoiguong(int n){
    int arr[10];
    int count = 0;
    while(n>0){
        arr[count] = n%10;
        n /= 10;
        count ++;
    }
    for(int i =0; i<count/2; i++){
        if(arr[i] != arr[count-i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cin>>num;
    for(int i =0; i<num; i++){
        int a, b;
        cin>> a >>b;
        int res = 0;
        for(int j = a; j<=b; j++){
            if(sodoiguong(j)) res++;
        }
        cout<<res<<endl;
    }
    return 0;
}
