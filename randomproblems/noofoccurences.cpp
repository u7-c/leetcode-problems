#include <iostream>
//codeforces
//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
#include <vector>

// Per your request, I'm using the std namespace globally.
using namespace std;

int main(){
    int m;
    int n;
    cin >> m;
    cin >> n;
    vector <int> count(m+1,0);
    for (int i = 0;i < n;i++){
        int num;
        cin >> num;

        if(num <= m){
            count[num]++;
        }
    }
    for(int i=1;i <= m; i++ ){
        cout << count[i] << endl;
    }
    return 0;
    
}