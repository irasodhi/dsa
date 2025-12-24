int mincharchange(string word){
    int n=word.length();
    int ans=0;
    int c=1;
    for(int i=1;i<n;i++){
        if(words[i]==word[i-1]){
            c++;
        }
        else{
            ans+=c/2;
            c=1;
        }

    }
    ans+=c/2;
    return ans;
}