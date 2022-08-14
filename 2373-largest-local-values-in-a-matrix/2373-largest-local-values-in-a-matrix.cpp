class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // This will be our final matrix of size (n-2)*(n-2)
        vector<vector<int>> ans(n-2,vector<int>(n-2));
        
        
        // We call our kind 'maxIn3x3' function only from index [(0,0) to (n-2,n-2)) excluding (n-2) i.e upto (n-3).
		// We will keep storing value returned by this function in 'ans' array at corresponding (i,j) co-ordinate while loop traversal.
        for(int i=0;i<n-2;i++)
        {
            for(int j=0;j<n-2;j++)
                ans[i][j] = maxIn3x3(grid, i, j);
        }
        
        
        // Happy return calculated ans matrix :)
        return ans;
    }
    
    
    // A function that takes a starting cordinate (i,j) and returns max value in 3x3 size matrix starting from this cordinate.
    int maxIn3x3(vector<vector<int>> &arr, int i, int j)
    {
        // Variable to store maximum value in this 3x3 matrix.
        int maxVal = INT_MIN;
        
        // Start from the cordinate (i,j) and loop for size of 3x3 matrix size.
        for(int x = i ; x < i+3 ; x++)
        {
            for(int y = j; y < j+3 ; y++)
                maxVal = max(arr[x][y], maxVal);
        }
        
        
        // Happy return the maximum value in this 3x3 size matrix :)
        return maxVal;
    }
};