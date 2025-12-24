void predict(int demand[],int n){
    stack <int>st;
    vector<int>ans(n,-1);
    for(int i=n;i>=0;i--){
        while(!st.empty()&&st.top()<=demand[i])st.pop();
        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(demand[i]);
        
    }
    for(int i=0;i<n;i++){
        cout<<ans[i];
        if(i<n-1) cout<<" ";
    }
}
void predict(int demand[],int n){
    stack<int>st;
    vector<int>ans(n,-1);
    for(int i=n;i>0;i--){
        while(!st.empty()&&demand[i]>st.top())st.pop();
        if(!st.empty()){
            ans[i]=st.top();
        }
        st.push(demand[i]);
    }
}
