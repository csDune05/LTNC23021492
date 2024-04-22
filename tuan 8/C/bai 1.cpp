#include <iostream>
#include <cstring>
using namespace std;
struct String {
    int length;
    char* str;

    String(const char* s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    String() {
        delete[] str;
    }

    void print() {
        cout << str;
    }

    char* append(const char* s){
        int newLength = length + strlen(s);
        char* result = new char[newLength + 1];
        strcpy(result, str);
        strcat(result, s);
        return result;
    }
};

int main() {
    String greeting("Hi");
    const char* appendedStr = greeting.append(" there");
    cout << appendedStr << endl;
    delete[] appendedStr;

    return 0;
}
