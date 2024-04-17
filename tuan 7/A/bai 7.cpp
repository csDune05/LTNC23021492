#include <iostream>
#include <cstring>
using namespace std;
int countOccurrence(const char* str1, const char* str2) {
    int count = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (int i = 0; i <= len2 - len1; i++) {
        if (strncmp(str2 + i, str1, len1) == 0) {
            count++;
        }
    }
    return count;
}

int main(int argc, const char* argv[]) {
    if (argc < 3) {
        cout << "Usage: program_name string1 string2" << endl;
        return 1;
    }
    const char* str1 = argv[1];
    const char* str2 = argv[2];
    int occurrence = countOccurrence(str1, str2);
    cout << "Number of occurrences: " << occurrence << endl;
    return 0;
}
