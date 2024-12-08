int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans=0;
    //xoring array1 and its elements
    for (int i=0;i<arr.size();i++){
        ans=ans^arr[i];

    }
     //xoring array1 and array2
     //as a result x^x^x=x
    for (int i=0;i<arr.size();i++){
        ans=ans^i;
        
    }
    return ans;
	
}
//only a function
