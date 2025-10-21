void findRepeatingElements(vector<int>& arr) {
    unordered_map<int,int> elementCount;
    for(auto i:arr) elementCount[i]++;    
    cout<<"The repeating elements are: ";
    for(auto i:elementCount) {
        if(i.second > 1) cout<<i.first<<" ";
    }
}
