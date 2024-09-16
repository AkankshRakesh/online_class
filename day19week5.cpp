#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("details.txt");

    if (outFile.is_open()) {
        outFile << "Name: Akanksh Rakesh\n";
        outFile << "Age: 22\n";
        outFile << "Course: B.Tech in Computer Science\n";
        outFile << "University: LPU\n";
        outFile.close();
        cout << "Details written to the file successfully.\n";
    } else {
        cout << "Unable to open file for writing.\n";
        return 1;
    }

    ifstream inFile("details.txt");

    if (inFile.is_open()) {
        string line;
        cout << "Details from the file:\n";
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file for reading.\n";
        return 1;
    }

    ifstream anotherFile("input.txt");

    if (anotherFile.is_open()) {
        string content;
        cout << "\nContent from input.txt file:\n";
        while (getline(anotherFile, content)) {
            cout << content << endl; 
        }
        anotherFile.close(); 
    } else {
        cout << "Unable to open input.txt for reading.\n";
        return 1;
    }

    return 0;
}
