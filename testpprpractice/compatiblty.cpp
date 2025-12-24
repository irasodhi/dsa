int comp(string aditi,string rohn){
    int m=aditi.size();
    int n=rohan.size();
    if(n>m)return 0;
    if(aditi.substr(m-n)==rohn)return 1;
    return 0;
}