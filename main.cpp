#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/**
 * Definitions of whether the word palindrome
 * 
 * @param str The input string
 * @return The Answer: is it the Palindrome or not?
 */
bool isPalindrome(string str) {
    string rev_str;
    bool result;

    // Transform input string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Reverse input string
    for (int i = str.length()-1; i >= 0; --i) {
        rev_str.push_back(str[i]);
    }

    // Check
    if (str.empty()) {
        result = false;
    } else if (str == rev_str) {
        result = true;
    }
    else {
        result = false;
    }
    
    return result;
}

int main(int argc, char** argv) {
    string str;
    
    cin >> str;

    if (isPalindrome(str)) {
        cout << "It's the Palindrome." << endl;
    }
    else {
        cout << "It's not the Palindrome." << endl;
    }

    return 0;
}
