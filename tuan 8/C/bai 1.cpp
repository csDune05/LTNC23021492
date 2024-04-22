#include <iostream>
using namespace std;
size_t strlen(char a[]){
    size_t length = 0;
    while(*a != '\0'){
        length++;
        a++;
    }
    return length;
}
void reversea(char a[]) {
    size_t l = strlen(a);
    char* m = a;
    char* n = a + l - 1;
    while (m < n) {
        char temp = *m;
        *m = *n;
        *n = temp;
        m++;
        n--;
    }
}
void delete_char(char a[], char c) {
    char* m = a;
    char* n = a;
    while (*m != '\0') {
        if (*m != c) {
            *n = *m;
            n++;
        }
        m++;
    }
    *n = '\0';
}
void pad_right(char a[], int n){
    size_t l =strlen(a);
    if(l >= n) return;
    char* m = a + l;
    for(int i = l; i<n; i++){
        *m = 'r';
        m++;
    }
}
void pad_left(char a[], int n){
    size_t l =strlen(a);
    if(l >= n) return;
    char* m = a+l;
    char* s = a+n;
    while(m >= a){
        *(s--) = *(m--);
    }
    for(int i =0; i<(n-l); i++){
        *a = ' ';
        a++;
    }
}
void truncate(char a[], int m){
    size_t l =strlen(a);
    if(l <= m) return;
    *(a+m) = '\0';
}
void trim_left(char a[]){
    char *m = a;
    char *n = a;
    while (*m != '\0' && *m == ' ') {
        m++;
    }
    while (*m != '\0') {
        *n = *m;
        n++;
        m++;
    }

    *n = '\0';
}
void trim_right(char a[]){
    size_t l = strlen(a);
    char *m = a - l -1;
    while (m >= a && *m == ' ') {
        m--;
    }
}
int main() {
    char a[] = "lionelmessi      ";
    char c = 's';
    int n = 15;
    int m = 10;
    trim_right(a);
    cout<<a;
    return 0;
}
