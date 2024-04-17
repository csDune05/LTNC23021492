#include <iostream>
#include <string>
using namespace std;
char* weird_string() {
   char c[] = “123345”;
   return c;
}
int main() {
    char* result = weird_string();
    cout  << result << endl;
    return 0;
}
