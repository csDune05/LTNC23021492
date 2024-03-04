#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], t=0;
    for(int i =0; i<n; i++){
        cin>>a[i];
        t += a[i];
    }
    double mean = t/n;
    int max = n;
    int min = n;
    for(int i=0; i<n; i++){
        if(max<a[i]) max=a[i];
        if(min>a[i]) min = a[i];
    }
    cout<<mean<<endl
        <<max<<endl
        <<min;
    return 0;
}
