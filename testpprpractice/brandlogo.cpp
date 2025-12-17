char company(string hn, string wn){
    vector<bool>present(26,0);
    for(char c:wn){
        present[c-'a']=true;
    }
    for(char c:hn){
        if(present[c-'a']){
            return c;
        }
    }
    return 'h';
}