#include <iostream>
#include <cstring>
using namespace std;
char* concat(const char* str1, const char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t resultLen = len1 + len2;
    char* result = new char[resultLen + 1];
    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";
    char* conStr = concat(str1, str2);
    cout << conStr << endl;
    delete[] conStr;

    return 0;
}
