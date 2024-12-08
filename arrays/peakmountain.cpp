#include<vector>
using namespace std;

class Solution {
public:
  
    int find_pivot(vector<int> v) {
	int s = 0, e = v.size() - 1;
	int mid=(s + e) / 2;
	while (s < e) //this is important s se pehle pehle while loop khatam krro and s ko return kro
    // 3 conditions banenge like ek hoga ascending slope pe jo ki first if condition mai likhi haui
    // aur baaki too condition mai ek toh peak element ho skta hai aur ek descending slope pe bhiso
    
	{
		if(v[mid] < v[mid+1])   
     			s=mid+1;
    		else
      			e = mid;
    //         lets take a case ki hamare paas peak=mid hai toh ham mid-1 kewnge toh woh wapis se ascending slope pe chala jayega
    // we need to avoid that it any case
    
		mid = (s + e) / 2;
	}
	return s;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return find_pivot(arr);
    }
};