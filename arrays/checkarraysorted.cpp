#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    bool issorted=true;  
    for (int i = 1; i < size; i++) {
        if(arr[i]<arr[i-1]){
            issorted=false;
        }
    }
    if(issorted==true){
        cout<<"the array is sorted"<<endl;
    }
    else{
        cout<<"the array is not sorted"<<endl;
    }
}