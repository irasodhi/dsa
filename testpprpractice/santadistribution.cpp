void distrinbution(int arr[],int k,int n){
    long min=LONG_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    long maxall=mn+k;
    long removed=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxall){
            removed+=(arr[i]-maxall)
        }
    }
    return removed;
}