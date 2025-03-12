#include <iostream>
#include <deque>
#include <vector>

using namespace std;

vector<int> firstNegativeInWindow(vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> result;
    int i = 0, j = 0;

    while (j < arr.size()) {
        // Add current element to deque if it's negative
        if (arr[j] < 0)
            dq.push_back(j);

        // Expand window
        if (j - i + 1 < k) {
            j++;
        }
        // When the window reaches size k
        else if (j - i + 1 == k) {
            // First negative in the window
            if (!dq.empty())
                result.push_back(arr[dq.front()]);
            else
                result.push_back(0);

            // Slide the window
            if (!dq.empty() && dq.front() == i)
                dq.pop_front();
            
            i++;
            j++;
        }
    }
    
    return result;
}

int main() {
    vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    
    vector<int> result = firstNegativeInWindow(arr, k);
    
    cout << "First negative integers in every window of size " << k << ": ";
    for (int num : result)
        cout << num << " ";
    
    return 0;
}

//links
//https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
//https://youtu.be/uUXXEgK2Jh8?si=vE1Zli-sDCoctzS2