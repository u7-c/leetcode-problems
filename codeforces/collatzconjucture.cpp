#include<iostream>
using namespace std;

int main(){
    int x;
    
    cin >> x;
    
    for(int i =  0; i < 5; i++){
        if((x % 2) == 0){
            x = x*2;
        }
        else{
            x = (x-1)/3;
        }
    }
    cout << x;
    return 0;
}