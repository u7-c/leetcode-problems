#include <iostream>

using namespace std;

int main() {
    int size;
    cout<<"enter the size :"<<endl;
    cin>>size;
    int arr[size];
    
    
    
    for(int i=0;i<size;i++){
        cout<<"enter element number "<<i<<" : ";
        cin>>arr[i];
    }
    int maxelement=arr[0];
    int secmaxelement;
    
    for(int i=1;i<size;i++){
        if(arr[i]>maxelement){
            secmaxelement=maxelement;
            maxelement=arr[i];
        }
    }
    cout<<"max element is :"<<maxelement<<endl;
    
    
    
    cout<<"second max element is :"<<secmaxelement<<endl;
    return 0;
    

}