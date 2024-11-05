//this is from coding ninjas
//intersection of elements using 3 cases
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	int i=0 ;
	int j=0;
	vector <int> ans;
	//run the code till n and m as given in the question 
	while (i<n && j<m){
		if (arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;


		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
		else{
			j++;
		}
        //jo kam hoga usse iterate karna hai
	}
	return ans;
	
}