#include <bits/stdc++.h>
#include <string>
using namespace std;

string numberToEnglish(int num) {
    string ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                     "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                     "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (num == 0) {
        return "zero";
    }
    if (num < 0) {
        return "negative " + numberToEnglish(-num);
    }

    string result;
    if (num >= 1000000) {
        result += numberToEnglish(num / 1000000) + "millionb";
        num %= 1000000;
    }
    if (num >= 1000) {
        result += numberToEnglish(num / 1000) + "thousand ";
        num %= 1000;
    }
    if (num >= 100) {
        result += numberToEnglish(num / 100) + "hundred ";
        num %= 100;
    }
    if (num >= 20) {
        result += tens[num / 10] + " ";
        num %= 10;
    }
    if (num > 0) {
        result += ones[num] + " ";
    }

    return result;
}

int main() {
    int num;
    cin >> num;

    string english = numberToEnglish(num);
    cout << english << endl;

    return 0;
}