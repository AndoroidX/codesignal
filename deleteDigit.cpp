int deleteDigit(int n) {
    string s = to_string(n);
    int mx = 0;
    for(int i=0;i<s.size();i++) {
        string ss = s;
        ss.erase(i,1);
        int k;
        std::istringstream sss(ss);
        sss >> k;
        mx = mx < k ? k : mx;
    }
    return mx;
}