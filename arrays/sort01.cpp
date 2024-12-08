//example of two pointer variable
#include <iostream>
using namespace std;

void printArray(int arr[] , int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}
//ek hi array mai do opposite sides e loop shuru kiya 
//agar left 0 hai ti left++
//agar right 1hai toh right--
//agar left 1 hai aur right 0 hai toh dono pe swap function laga do
void sortOne (int arr[],int n){
    int left=0 ; 
    int right=n-1;
    while (left < right){
        while (arr[left]==0 && left < right){
            left++;
        }
        while (arr[right]==1 && left < right){
            right--;

        }
        //mistakeeeee yaha if lagega maione while use kiya tha
        if (left < right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}
int main (){
    int arr[8]={1,0,1,1,0,0,0,1};
    sortOne(arr,8);
    printArray(arr,8);

    return 0;
}

