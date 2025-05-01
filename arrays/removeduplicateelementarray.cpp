#include <iostream>

using namespace std;
bool sortedarray(int arr[],int size){
     
    for (int i = 1; i < size; i++) {
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    bool sorted = sortedarray(arr,size);
}