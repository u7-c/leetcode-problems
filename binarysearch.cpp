//isme mid nikalna hota hai fir aag ya peeche wali side nialni hoti hai for example if the number is still greater than the mid
//toh aage wali side a dubara mid nikalte hai until mid=key uske baad index mil jaata hai
#include <iostream>
using namespace std;

int binarysea (int arr[],int n,int key){

int start=0;
int end=n-1;
int mid;

while (start<=end){
   mid=(start+end)/2;   //agar ye statement nahi likhi toh infinite loop chaljayega //specially while loop ke andar likhna hota hai isse
    if (key==arr[mid]){
        return mid;
    
    }
    if (key>arr[mid]){
        start=mid+1;
    }
    if (key<arr[mid]){
        end=mid-1;
    }
}
return -1;
}
int main(){
    int even[6]={1,2,3,4,5,6};
    int odd[5]={6,7,8,9,0};
    int index=binarysea(odd,5,7);
    cout<<"the index is"<<index<<endl;


}
//for example start=2^31-1 and end=2^31-1 hai toh kaise mai uss int ki range ke bahar wale test case se bach sakta hu?
//so like as usual we do (start+end)/2
// uski jagah we can write mid=start+(end-start)/2; 
//is tareeke se you caan save yourself from test case error   

//what is the difference between binary search and linear search?
 /* answer= in linear search suppose if there are 1000 elements in an array so to find one element you will have to 1000 comparisons
but in other case if you use binary search so the searches are limited in steps firstly they will be 500 then 250 the 125 
and so on so hence leading to less time for solving 
cases ka ek pattern bhi mila which is N=2^k
k=logn 
complexity hogyi log n*/