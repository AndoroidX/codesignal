bool isMAC48Address(std::string is) {
    if(is.size()!=17) return false;
    for(int i=0;i<is.size();i++) {
        if(i%3==2) if(is[i] != '-') return false;
        if(i%3!=2 && !(is[i] >= '0' && is[i] <= '9' || is[i] >='A' && is[i] <='F')) return false;
    }
    return true;
}
