int findUnique(int *arr, int size)

{
    //Write your code here
    int ans;
    for (int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
//its just the function you neeed to use