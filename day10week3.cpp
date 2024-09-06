#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

// Ques 1: 
int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Ques 2:
bool isPalindrome(const std::string &str) {
    std::string cleanedStr = "";
    for (char c : str) {
        if (std::isalnum(c)) {
            cleanedStr += std::tolower(c);
        }
    }
    
    int left = 0;
    int right = cleanedStr.length() - 1;
    
    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            return false;
        }
        left++;
        right--;
    }
    
    return true;
}

int main() {
    int arr1[] = {1, 5, 3, 9, 2};
    std::cout << "Maximum value in the array: " << findMax(arr1, 5) << std::endl;

    int arr2[] = {-10, -3, -15, -2, -7};
    std::cout << "Maximum value in the array: " << findMax(arr2, 5) << std::endl;

    std::string str1 = "A man, a plan, a canal, Panama";
    std::cout << "\"" << str1 << "\" is a palindrome: " << std::boolalpha << isPalindrome(str1) << std::endl;

    std::string str2 = "Hello, World!";
    std::cout << "\"" << str2 << "\" is a palindrome: " << std::boolalpha << isPalindrome(str2) << std::endl;

    return 0;
}
