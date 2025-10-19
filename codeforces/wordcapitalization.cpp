#include <iostream>
#include <string>

// I'm using the std namespace as you've requested.
using namespace std;

int main() {
    string s;
    cin >> s; // Read the input word

    // Check if the first character is a lowercase letter
    // using its ASCII value range ('a' is 97, 'z' is 122).
    if (s[0] >= 'a' && s[0] <= 'z') {
        // The ASCII value for an uppercase letter is exactly 32
        // less than its lowercase counterpart (e.g., 'a' is 97, 'A' is 65).
        // Subtracting 32 converts the character to uppercase.
        s[0] = s[0] - 32;
    }

    cout << s << endl; // Print the modified string

    return 0;
}