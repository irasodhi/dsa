vector<string>findduplicate(const vector<string>&ids){
    unoredered_map<string,int>freq;
    vector<string>dupli;
    for(const string &id:ids){
        freq[id]++;
        if(freq[id]==2){
            dupli.push_back(id);
        }
    }
    return dupli;

}