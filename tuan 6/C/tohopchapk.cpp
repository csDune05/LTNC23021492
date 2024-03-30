#include <iostream>
using namespace std;

int giaithua(int a){
    if(a==0 || a==1) return 1;
    else return a*giaithua(a-1);
}
int toHop(int k, int n){
    return giaithua(n) / ( giaithua(k) * giaithua(n-k));
}
int kiemTra(int k, int n){
    if(1<=n && n<=20 && 0<=k && k<=n) return 1;
    else return 0;
}
void nhapKN(int k[], int n[], int* soPhanTu){
    *soPhanTu = 0;
    int flag = 1;
    while (flag) {
        int ki, ni;
        cin >> ki >> ni;
        if (ki == -1 && ni == -1) {
            flag = 0;
        } else {
            if (kiemTra(ki, ni)) {
                k[*soPhanTu] = ki;
                n[*soPhanTu] = ni;
                (*soPhanTu)++;
            }
        }
    }
}
int main(){
    int k[100], n[100], soPhanTu;
    nhapKN(k, n, &soPhanTu);

    for (int i = 0; i < soPhanTu; i++) {
        int res = toHop(k[i], n[i]);
        cout<< res << endl;
    }

    return 0;
}
