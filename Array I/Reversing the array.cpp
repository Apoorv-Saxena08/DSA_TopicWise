void reverseArray(vector<int> &arr , int m) {
    int n = arr.size();
    int l = m+1, r = n-1;
    while(l<=r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }       
}
