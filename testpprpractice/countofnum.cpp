#include <iostream>
using namespace std;
int firstocc(int arr[],int n,int k){
    int l=0;
    int h=n-1;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==k){
            ans=mid;
            h=mid-1;
        }
        else if(arr[mid]<k){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
}
int lastocc(int arr[],int n,int k){
    int l=0;
    int h=n-1;
    int ans=-1;
  
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==k){
            ans=mid;
            l=mid+1;

        } 
        else if(arr[mid]<k){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    

    }
    return ans;

}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int f=firstocc(arr,n,k);
        if(f==-1){
            cout<<0;
        }
        else{
            int last=lastocc(arr,n,k);
            cout<<(last-f+1)<<endl;
        }

       
    }
    

}