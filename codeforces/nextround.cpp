#include <iostream>
#include <vector>

// Using the standard namespace as you requested.
using namespace std;

int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;
    vector<int>scores(n);
    cout << "enter the scores" << endl;
    for (int  i= 0;i < n;i++){
        cin >> scores[i];        
    }

    int passed = 0;
    int benchmark = scores[k-1];

    for (int i= 0;i < n;i++){
        if( scores[i] >= benchmark && scores[i] > 0){
            passed++;
        }
    }
    cout << "the number of people passed are :" << passed;


    
}