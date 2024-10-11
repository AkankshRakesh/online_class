#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

string frequencySort(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    vector<pair<char, int>> vec(freq.begin(), freq.end());
    sort(vec.begin(), vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    });

    string result;
    for (const auto& p : vec) {
        result += string(p.second, p.first);
    }

    return result;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string sortedString = frequencySort(s);
    cout << "Sorted string based on frequency: " << sortedString << endl;

    return 0;
}
