#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    int k = 2;
    if((b % k) != 0){
        return 0;
    }
    a = k * a;
    b = b / k;
    int sum = a+ b;
    if ( sum % 2 != 0){
        cout << "-1";
    }
    else{
        cout << sum;
    }
    return 0;
}