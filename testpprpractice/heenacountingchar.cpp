vector<int>freq(26,0);
for(char c:arr){
    freq[c-'a']++;
}
for(int i=0;i<26;i++){
    if(freq[i]>0){
    cout<<char('a'+i)<<freq[i]<<" ";
}
}