class Solution {
public:
    bool searchMatrix(vector<vector<int>> matrix, int target) {
        int n = matrix.size() ;
        int m = matrix[0].size();


        int start=0 , end = n*m-1;
        while(start<=end){
            int mid= start + (end-start)/2;
            int row_idx = mid/m;
            int col_idx = mid%m;
            if(matrix[row_idx][col_idx]==target){
                return 1;
            }
            else if(matrix[row_idx][col_idx]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return 0;
    }
};
