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
int removeduplicate(int arr[],int size){
    int j=0;
    if(size==1 || size==0){
        return size;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[j++]=arr[i];
        }
    }
    arr[j++]=arr[size-1];
    return j;
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
    int temp;
    bool sorted = sortedarray(arr,size);
    if (sorted == true){
        int newsize=removeduplicate(arr,size);
        for(int i=0;i<newsize;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        cout<<"the array is not sorted"<<endl;
    }
}