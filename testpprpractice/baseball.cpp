int calpoints(string input){
    stack<int>st;
    for(char c:input){
        if(isdigit(c)){
            st.push(c-'0');
        }
        else if(c=='C'){
            if(!st.empty()){
                st.pop();
            }
        }
        else if(c=='D'){
            if(!st.empty()){
            st.push(2*st.top())}
        }
        else if(c=='+'){
            if(st.size()>2){
                int val1=st.top();
                st.pop();
                int val2=st.top();
                st.push(val1);
                st.push(val1+val2);
            }
        }


    }
    int sum=0;
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    return sum;
}