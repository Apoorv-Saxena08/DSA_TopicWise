int factorial(int n) {
        int ans = 1;
        for (int i = 2; i <= n; i++) {
            // calculating the factorial
            ans = ans * i;
        }
        return ans;
    }
