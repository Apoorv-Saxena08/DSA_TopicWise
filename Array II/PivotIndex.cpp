class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans = -1 ;
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            int sumbefore =0 , sumafter = 0 ;
            for(int j = 0 ; j<i ; j++){
                sumbefore += nums[j];
            }
            for(int k = i+1;k<n;k++){
                sumafter += nums[k];
            }
            if(sumbefore == sumafter){
                ans = i;
                return ans;
            }
        }
        return ans ;
    }
};
