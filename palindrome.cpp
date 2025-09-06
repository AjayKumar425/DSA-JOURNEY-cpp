#include <iostream>
#include <cctype> // for tolower
using namespace std;

// Function to check if character is alphanumeric
bool isAlphaNum(char ch) {
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
        return true;
    }
    return false;
}

// Function to check if string is palindrome
bool isPalindrome(string ch) {
    int st = 0, end = ch.length() - 1;

    while (st < end) {
        if (!isAlphaNum(ch[st])) {
            st++;
            continue;
        }
        if (!isAlphaNum(ch[end])) {
            end--;
            continue;
        }
        if (tolower(ch[st]) != tolower(ch[end])) {
            return false;   // missing ; fixed
        }
        st++;
        end--;
    }
    return true;   // added
}

int main() {
    string ch = "racecar";

    if (isPalindrome(ch)) {
        cout << ch << " is a palindrome" << endl;
    } else {
        cout << ch << " is not a palindrome" << endl;
    }

    return 0;
}
