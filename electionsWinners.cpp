int electionsWinners(std::vector<int> votes, int k) {
    int mx = -1;
    int mxCan = 0;
    for(int i : votes) if(i > mx) mx = i;
    for(int i : votes) if(i == mx) mxCan++;
    if(k==0) if(mxCan == 1) return 1; else return 0;
    int ans = 0;
    for(int i : votes) if(k+i > mx) ans++;
    return ans;
}