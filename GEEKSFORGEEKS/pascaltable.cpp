class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        if (n <= 0){
            return {};//edge case hai
        }
        vector <int> row = {1};//starting 1 se krenge na
        
        for(int i = 1;i < n;i++){
            vector<int> next_row;
            //i literally forgot to make this 
            next_row.push_back (1);//starting element is always 1
            
            for(int j = 0; j < row.size() - 1;j++){
            next_row.push_back(row[j] + row[j+1]);
            }
            next_row.push_back(1);
            row = next_row;//dubara initialise hoga toh new row and row holds the answers
        }
        return row;//kyuki row mai answer fill krre look at row = new_row
    }
};
