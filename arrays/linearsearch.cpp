#include <iostream>

using namespace std;

int main() {
    int size;
    cout<<"enter the value  of array size"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the value of key"<<endl;
    cin>>key;
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"element found at index "<<i<<endl;
            break;
        }
    }
    if(i==size){
        cout<<"element not found"<<endl;
    }
}
