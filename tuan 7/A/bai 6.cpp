#include <iostream>

int main(int argc, const char* argv[]) {
    cout << "Number of command-line arguments: " << argc << endl;
    for (int i = 0; i < argc; i++) {
         cout << "Argument #" << i << ": " << argv[i] << endl;
    }
    return 0;
}
/* output
Number of command-line arguments: 1
Argument #0: E:\GitHub(2)\LTNC23\tuan 7\A\bai 6.exe
