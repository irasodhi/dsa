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
                break;
            }
            else if(arr[mid]<x){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        
        }
        if(ans==-1)
        tot+=n;
        else
        tot+=ans;
    }
    return tot;
}