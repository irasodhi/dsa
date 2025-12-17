void family(int arr[],int n,int k){
    for(int i=0;i<n;i+=k){
        int l=i;
        int r=min(i+k-1,n-1);
        while(l<r){
            swap(arr[left],arr[right]);
            l++;
            r--;
        }
    }
}