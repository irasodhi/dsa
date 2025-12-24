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

char company(string hn, string wn){
    char ans='-';
    for(int i=0;i<w.name();i++){
        for(int j=0;j<h.name();j++){
            if(h[i]==w[j]){
                ans=h[i];
                i=h.size();
                break;
            }
        }
    }
    cout<<ans;
}