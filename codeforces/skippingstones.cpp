//https://codeforces.com/problemset/problem/266/A

//we will be giving a string lin which we have to separate the colors as no two
//neighbour are same so if GGG R BB
//we will remove two g 0 r 1 b so that no two neighbours are same

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s;
    
    cout <<"enter the string :";
    cin >> s;
    int n =  s.size();
    int removeStone = 0;

    for (int i = 1 ; i < n ; i++){//starting loop from 1
        if (s[i-1] == s[i]){
            removeStone++;
        }
    }
    cout << "\n the number of stones to be removed are " << removeStone;
}