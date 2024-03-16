#include <iostream>
using namespace std;
int main() {
    char daytab[2][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << static_cast<int>(daytab[i][j]) << " ";
        }
        cout << endl;
    }
    cout << endl;

    char daytabPartial[2][12] = {
        {31,28,31,30},
        {31,29}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << static_cast<int>(daytabPartial[i][j]) << " ";
        }
        cout << endl;
    }
   cout << endl;

    char daytabComma[2][12] = {
        31,28,31,30,31,30,31,31,30,31,30,31,
        31,29,31,30,31,30,31,31,30,31,30,31
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << static_cast<int>(daytabComma[i][j]) << " ";
        }
        cout << endl;
    }
    cout<<endl;

    char daytabNoSize[][12] = {
        {31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    for (int i = 0; i < sizeof(daytabNoSize) / sizeof(daytabNoSize[0]); i++) {
        for (int j = 0; j < sizeof(daytabNoSize[0]) / sizeof(daytabNoSize[0][0]); j++) {
            cout << static_cast<int>(daytabNoSize[i][j]) << " ";
        }
        cout << endl;
    }

    return 0;
}
