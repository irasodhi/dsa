void checkupper(int arr[],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j];
        }
    }
    bool upper=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i][j]!=0){
                upper=false;
                break;
            }
        }
    }
    if(!upper){
        cout<<"upper";
    }
    else{
        cout<<'not upper';
    }

}