std::string lineEncoding(std::string s) {
    string out;
    for(int i=1,c=1;i<s.size();i++) {
        if(s[i] == s[i-1]) c++;
        else {
            if(c!=1) out+=std::to_string(c);
            out+=s[i-1];
            c=1;
        }
        if(i==s.size()-1) {
            if(c!=1) out+=std::to_string(c);
            out+=s[i];
            c=1;
        }
    }
    return out;
}
