#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string FirstNonRepeating(string &s) {
        unordered_map<char, int> freq; // Store frequency of characters
        queue<char> q; // Store characters in order of arrival
        string ans = "";
        
        for (char ch : s) {
            freq[ch]++;  // Increase frequency count
            q.push(ch);  // Push the current character into the queue
            
            // Remove all repeating characters from the front of the queue
            while (!q.empty() && freq[q.front()] > 1) {
                q.pop();
            }
            
            // If queue is empty, append '#', else append the first non-repeating character
            ans += (q.empty()) ? '#' : q.front();
        }
        
        return ans;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string A;
        cin >> A;
        Solution obj;
        string ans = obj.FirstNonRepeating(A);
        cout << ans << "\n";
    }
    return 0;
}
//links
//https://www.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1