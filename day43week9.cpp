#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <sstream>

class NonIntegerDataException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Non-integer data found in the file.";
    }
};

int main() {
    std::string filePath;
    std::cout << "Enter the file path: ";
    std::cin >> filePath;

    std::ifstream file;
    int sum = 0;
    try {
        file.open(filePath);
        if (!file.is_open()) {
            throw std::ios_base::failure("Error: Unable to open file.");
        }

        std::string word;
        try {
            while (file >> word) {
                std::stringstream ss(word);
                int num;

                if (!(ss >> num) || !(ss.eof())) {
                    throw NonIntegerDataException();
                }

                sum += num;
            }
            std::cout << "Sum of integers: " << sum << std::endl;

        } catch (const NonIntegerDataException& e) {
            std::cerr << e.what() << std::endl;
        }

    } catch (const std::ios_base::failure& e) {
        std::cerr << e.what() << std::endl;
    }

    if (file.is_open()) {
        file.close();
    }

    return 0;
}
