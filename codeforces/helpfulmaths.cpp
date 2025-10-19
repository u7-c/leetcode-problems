//https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Per your request, I'm using the std namespace.
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> numbers;
    // Loop through the string to extract only the digits.
    for (char c : s) {
        if (c != '+') {
            numbers.push_back(c);
        }
    }

    // Sort the vector of numbers.
    sort(numbers.begin(), numbers.end());

    // Print the sorted numbers, adding a '+' between them.
    for (size_t i = 0; i < numbers.size(); ++i) {
        cout << numbers[i];
        if (i < numbers.size() - 1) {
            cout << "+";
        }
    }
    cout << endl;

    return 0;
}