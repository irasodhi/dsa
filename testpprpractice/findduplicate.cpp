vector<string>findduplicate(const vector<string>&ids){
    unoredered_map<int,int>freq;
    vector<string>dupli;
    for(const string &id:ids){
        freq[ids]++;
        if(freq[id]==2){
            dupli.push_back(id);
        }
    }
    return dupli;

}