  public:
    int solve(vector<int>& arr, int i) {
        if (i == arr.size()) return 0;  // base case
        return arr[i] + solve(arr, i + 1);  // recursive step
    }

    int arraySum(vector<int>& arr) {
        return solve(arr, 0);
    }
};
