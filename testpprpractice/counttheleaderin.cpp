counttheleader(int arr[],int n){
    int maxright=arr[n-1];
    int count=1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>maxright){
            maxright=arr[i];
            count++;
        }
     
    }
       return count;
}