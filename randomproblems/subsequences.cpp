// 1. Include necessary libraries
#include <iostream>
#include <string>

// 2. Use the standard namespace for easier access to cin, cout, string, etc.
using namespace std;

// 3. Main function where the program execution begins
int main() {
    // 4. Declare and read input variables
    int n;
    cin >> n; // Read the size of the string
    string s;
    cin >> s; // Read the string itself

    // 5. Initialize the result subsequence
    string t = ""; // This will store our valid subsequence

    // 6. Handle the case of a non-empty string
    if (n > 0) {
        // 7. Add the first character unconditionally
        t += s[0];

        // 8. Loop through the rest of the original string
        for (int i = 1; i < n; ++i) {
            
            // 9. The core greedy check:
            // Compare the current character (s[i]) with the last
            // character added to our result (t.back()).
            if (s[i] != t.back()) {
                
                // 10. If they are different, append it to our result
                t += s[i];
            }
        }
    }

    // 11. Print the size of the resulting subsequence
    cout << t.length() << endl;
    
    // 12. Indicate successful execution
    return 0;
}