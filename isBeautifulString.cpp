bool isBeautifulString(std::string is) {
    int l[130];
    memset(l,0,sizeof(l));
    for(int i=0;i<is.size();i++) l[is[i]]++;
    for(int i='a';i<'z';i++) {
        if(l[i] < l[i+1]) return false;
    }
    return true;
}