class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
         vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int n=row*col;
        
        int startingRow=0;
        int endingRow=row-1;
        int startingCol=0;
        int endingCol=col-1;
        int count=0;
        
        while(count < n){
            for(int index=startingCol; count<n && index<=endingCol; index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            for(int index=startingRow; count<n && index<=endingRow; index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            for(int index=endingCol; count<n && index>=startingCol; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            for(int index=endingRow; count<n && index>=startingRow; index--)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
        
    }
};
