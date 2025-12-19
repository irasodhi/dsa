int compressmsg(string msg){
    int n=msg.length();
    int count=0;
    string res="";
    for(int i=0;i<n;i++){
        if(i<n-1&&msg[i]==msg[i+1]){
            count++;
        }
        else{
            res+=msg[i];
            res+=to_string(count);
            count=1;
        }
    }
    return res;

}