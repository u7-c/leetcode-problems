#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    //yaha p toh 10+20 then 30+40 wala algo lagaya hai
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        //n number of members jike beech mai books distribute hongi
        //starting ke elements + krega like 10+20 in this case
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        //yeh naye wale part pe i mean 30 40 pe jayega
        else
        {
            studentCount++;
            //conditon check krna important hai
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}