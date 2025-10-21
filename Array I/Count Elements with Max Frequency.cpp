class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>v(100,0);
        for(int n : nums){
            v[n-1]++;
        }
        int maxi = 0 ;
        for(int n : v){
            maxi = max(maxi , n);
        }
        int count = 0;
        for(int n : v){
            if(n == maxi){
                count += maxi;
            }
        }
        return count;
    }
};
