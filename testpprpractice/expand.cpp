string expnd(string s){
    string res="";
    int i=0,n=s.length();
    while(i<n){
        char ch=s[i++];
        int num=0;
        while(i<n && isdigit(s[i])){
            num=num*10+(s[i]-'0');
            i++;
        }
        if(num==0)num=1;
        res.append(num,ch);
    }
    return result;
}