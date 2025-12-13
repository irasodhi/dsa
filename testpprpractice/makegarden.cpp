int beautiful(int a[],int n){
    int o=a[0]+a[n-1];
    for(int i=1;i<n-1;i++){
        int sum1=a[i]+a[n-1];
        if(sum1>0){
            o=sum1;
        }
        int sum2=a[0]+a[i];
        if(sum2>0){
            o=sum2;
        }
    }
    return o;
}