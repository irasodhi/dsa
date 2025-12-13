long solve(int n,int arr[],int k,int chal[]){
    int tot=0;
    for(int i=0;i<k;i++){
        int l=0;
        int x=chal[i];
        int h=n-1;
        int ans=-1;
        while(l<=h){
            int mid=(h+l)/2;
            if(arr[mid]==x){
                ans=mid;
                l=mid+1;
            }
            else if(arr[mid]<x){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        
        }
        tot+=ans;
    }
    return tot;
}