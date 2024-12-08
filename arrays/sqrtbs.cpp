#include <iostream>
using namespace std;

int binarySearch(int n) {
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
        //hamne apni search space change ki hai is que mai 
        //binary search lagayenge like agar mid ke square hua toh return mid
        //agar usse kam hua toh left section nahi toh right its that simple 
        //ERROR:we have to equate to n not mid .... conditions mai kaafi galtiya kardi thi
        int square = mid * mid;
        if (square == n) {
            return mid;
        }
        if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    int tempSol = binarySearch(n);
    cout << "The integer square root is: " << tempSol << endl;
    return 0;
}

