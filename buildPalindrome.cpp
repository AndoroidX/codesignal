bool isPalindrome(string s) {
    for(int i=0;i<s.size()/2;i++) if(s[i]!=s[s.size()-1-i]) return false;
    return true;
}

std::string buildPalindrome(std::string s) {
    for(int i=0;i<s.size();i++)
        if(isPalindrome(s.substr(i,s.size()))) {
            for(int j=i-1;j>=0;j--)
                s+=s[j];
            return s;
        }
}
