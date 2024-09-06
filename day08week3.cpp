#include <iostream>
#include <string>
using namespace std;
int stringLength(const string &str) {
    return str.length();
}

int countCharacter(const string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

string concatenateStrings(const string &str1, const string &str2) {
    return str1 + str2;
}

int main() {
    string str1 = "Hello, World!";
    cout << "Length of string \"" << str1 << "\": " << stringLength(str1) << endl;

    char ch = 'l';
    cout << "Number of occurrences of '" << ch << "' in \"" << str1 << "\": " << countCharacter(str1, ch) << endl;

    string str2 = "Hello, ";
    string str3 = "World!";
    cout << "Concatenated string: \"" << concatenateStrings(str2, str3) << "\"" << endl;

    string str4 = "C++ Programming";
    cout << "Length of string \"" << str4 << "\": " << stringLength(str4) << endl;

    char ch2 = 'g';
    cout << "Number of occurrences of '" << ch2 << "' in \"" << str4 << "\": " << countCharacter(str4, ch2) << endl;

    string str5 = "How are you ";
    string str6 = "doing!";
    cout << "Concatenated string: \"" << concatenateStrings(str5, str6) << "\"" << endl;

    return 0;
}
