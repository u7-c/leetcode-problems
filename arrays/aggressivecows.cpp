bool isPossible(vector<int> &stalls, int k, int mid, int n) {
    
    int cowCount = 1; 
    int lastPos = stalls[0];//first element jo ki sorted array se aaya hai ussi se minus krenge
    
    for(int i=0; i<n; i++ ){
        
        if(stalls[i]-lastPos >= mid){ //to check for ex 5 is greater than equal to 4
        //kyuki agar 4 mai cows aggressive nahi hui toh 5 6 7.. mai bhi nahi hongi
            cowCount++;
            if(cowCount==k)//usually in this case k will be 2
            {
                return true;
            }
            lastPos = stalls[i];//ofc mid change hoga toh lastpos bhi vchange hoga
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
   	int s = 0;
    int n = stalls.size();
    int e=stalls[n-1];//agar array sorted hai toh end position bhi known hai
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e) {
        if(isPossible(stalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;//ye BOOK ALLOCATION jaisa nahi hai its like
                        //kyuki agar 4 mai cows aggressive nahi hui toh 5 6 7.. mai bhi nahi hongi
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}