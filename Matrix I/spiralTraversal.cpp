class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row = matrix.size() ,col = matrix[0].size();
        int top = 0, bottom = row-1, left = 0 , right = col-1;


        while(left<=right && top<=bottom){
            //print top
            for(int j = left ; j<=right;j++)
            ans.push_back(matrix[top][j]);
            top++;
           


            //print right
            for(int j = top ; j<=bottom;j++)
                ans.push_back(matrix[j][right]);
                right--;
           


            //print bottom
            if(top<=bottom){
                for(int j = right ; j>=left;j--)
                ans.push_back(matrix[bottom][j]);
                bottom--;
           
            }


            //print left
            if(left<=right){
                for(int j = bottom ; j>=top;j--)
                ans.push_back(matrix[j][left]);
                left++;
           
            }
        }


        return ans;
    }
};
