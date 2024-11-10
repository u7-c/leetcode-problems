#include<iostream>
using namespace std;
//in case of finding first digit while we get key = mid... we use the left part 
//so we write n the condition end=mid-1
int binaryseafirst(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid;
    int ans=-1; //please use the variable ans you already have so many mistakes here and also dont forget to initgialize it as well
    while (start<=end){
        mid=(start+end)/2;
        if(key==arr[mid]){
            ans=mid;
            
            end=mid-1;
        }
        if (key<arr[mid]){
            end=mid-1;
        }
        if (key>arr[mid]){
            start=mid+1;
        }
    } return ans;
}
//in case of finding last digit while we get key = mid... we use the right part 
//so we write n the condition start=mid+1
int binarysealast(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid;
    int ans=-1;
    while (start<=end){
        mid=(start+end)/2;
    if(key==arr[mid]){
            ans=mid;
            
            start=mid+1;
        }
        if (key<arr[mid]){
            end=mid-1;
        }
        if (key>arr[mid]){
            start=mid+1;
        }
    } return ans;
}
int main(){
   int even[8]={1,2,3,5,5,6,7,8};
   int firstindex=binaryseafirst(even,8,5);  //you were wrong here too you need to use a function while declarfing a new variable
   int lastindex=binarysealast(even,8,5);
   cout<<"the first index is : "<<firstindex<<endl;
   cout<<"the last index is : "<<lastindex<<endl;
   return 0;


}

// agar total number of occuences nikaln ho toh kya kro
// lastocc-firstocc+1
// +1 imp haii 