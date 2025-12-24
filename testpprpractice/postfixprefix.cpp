int evalpostfix(CQStack *stack,string exp){
    for(char ch:exp){
        if(isdigit(ch-'0')){
            stack->push(ch);
        }
        else{
            int val2=stack->pop();
            int val1=stack->pop();
            switch(ch){
                case '+':stack->push(val1+val2);break;
                case '-':stack->push(val1-val2);break;
                case '*':stack->push(val1*val2);break;
                case '/':stack->push(val1/val2);break;
                case '^':stack->push(pow(val1,val2))break;
            }
        }
    }
    return stack->pop();
}
int evalpostfix(CQStack *stack,string exp){
   for(char c:exp){
    if(isdigit(c)){
        stack->push(c-'0');
    }
    else{
        int val2=st.top();
        st.pop();
        int val2=st.top();
        st.pop();
        switch(c){
            case '+':
        }
    }
   }
}







