#include <iostream>
#include<set>

using namespace std;
void unionofarrays(int arr1[], int arr2[], int size1, int size2);

int main() {
    int size1;
    int size2;
    
    cout<<"enter the size of the first array"<<endl;
    cin>>size1;
    int arr1[size1];
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"the elements of the first array are"<<endl;
    for(int i=0;i<size1;i++){
        cout<<arr1[i];
    }
    cout<<endl;
    cout<<"enter the size of the second array"<<endl;
    cin>>size2;
    int arr2[size2];
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    cout<<"the elements of the second array are"<<endl;
    for(int i=0;i<size2;i++){
        cout<<arr2[i];
    }
    cout<<"union of both the arrays is"<<endl;
    unionofarrays(arr1,arr2,size1,size2);
    cout<<endl;

}
    void unionofarrays(int arr1[],int arr2[],int size1,int size2){
        set<int> result;
        for(int i=0;i<size1;i++){
            result.insert(arr1[i]);
        }
        for(int i=0;i<size2;i++){
            result.insert(arr2[i]);
        }
        for(int val: result){
            cout<<val<<" ";
        }
        cout<<endl;
    }