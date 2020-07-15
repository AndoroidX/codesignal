std::string findEmailDomain(std::string address) {
    for(int i=address.size()-1;i>=0;i--) if(address[i]=='@') return address.substr(i+1,address.size()-1);
    return "";
}