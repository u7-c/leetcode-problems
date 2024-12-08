//coding ninja question

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>> ans;
   //we made two loops one loop takes the first element and the other starts with the second element
   //i and i+1 element ke baad sabka comparison hota hai
   for (int i=0;i<arr.size();i++){
     for (int j = i + 1; j < arr.size(); j++) {
       //now to check if both elements add up to same number
       if (arr[i] + arr[j] == s){
         vector<int> temp;
       temp.push_back(min(arr[i], arr[j]));
       temp.push_back(max(arr[i], arr[j]));
       ans.push_back(temp);
     }
   }
}
//you need to sort nahi toh nahi hoga answer
   sort(ans.begin(),ans.end());
   return ans;
}