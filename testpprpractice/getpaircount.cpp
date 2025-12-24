int getpair(int arr[],int n,int k){
    sort(arr,arr+n);
    int i=0,j=1,cnt=0;
    while(i<n&&j<n){
        if(i==j){
            j++;
            continue;
        }
        long diff=arr[j]-arr[i];
        if(diff==k){
            i++;
            j++;
        }
        else if(diff<k){
            j++;
        }
        else{
            i++;
        }
    }
    return cnt;
}