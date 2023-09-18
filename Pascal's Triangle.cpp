//Here if we have to find element of 6th row and 3rd column then we will use formula 
//(row-1)C(col-1) i.e, (6-1)C(3-1)= 5C2 
//then we will iterate this formula for each row and hence return ans

class Solution {
public:
    vector<int>gen_row(int row)    // function to find elements for one row
    {
        vector<int>rowAns;
        long long ans= 1;
        rowAns.push_back(1);
        for(int col=1; col<row; col++)
        {
            ans = ans * (row- col);
            ans = ans / col;
            rowAns.push_back(ans);
        }
        return rowAns;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        vector<int>sol;
        //Iterate the gen_row funtion for finding the elements for first r<=numRows
        for(int r= 1; r<=numRows; r++ )
        {
            sol = gen_row(r);
            res.push_back(sol);
        }
        return res;
        
    }
};
