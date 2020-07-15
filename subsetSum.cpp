bool rec(int prevSum, int sum, vector<int> arr) {
    if(prevSum == sum) return 1;
    for(int i = arr.size()-1;i>=0;i--) {
        vector<int> curArr = arr;
        int cur = curArr[i];
        if(prevSum + cur == sum) return 1;
        if(prevSum + cur > sum) continue;
        curArr.erase(curArr.begin()+i);
        if(rec(prevSum + cur, sum, curArr)) return 1;
    }
    return 0;
}

bool subsetSum(std::vector<int> arr) {
    int sum = 0;
    int mx = -1;
    for(int i=0;i<arr.size();i++) {
        sum+=arr[i];
        if(arr[i] > mx) mx = arr[i];
    }
    if(sum%2 != 0) return 0;
    if(mx > sum/2) return 0;
    sort(arr.begin(), arr.end());
    arr.pop_back();
    return rec(mx, sum/2, arr);
}