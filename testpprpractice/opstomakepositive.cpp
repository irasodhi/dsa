int minop(vector<int>arr){
    int ops=0;
    int sign=1;
    for(int x:arr){
        if(x*sign<0){
            ops++;
            sign*=-1;
        }
    }
    return ops;
}