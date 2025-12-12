void cesarcipher(string mess, int k){
    res=" ";
    for(char c:mess){
        if(c>='A'&& c<='Z'){
            char shifted=(ch-'A'+k)%26+'A';
            res+=shifted;
        }
        else if(c>='a'&&c<='z'){
            char shifted=(ch-'a'+k)%26+'A';
            res+=shifted;
        }
        else{
            res+=ch;
        }
    }
    return res;
}