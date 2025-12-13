#include <iostream>
using namespace std;

void stackreverse(string message){
    cqstack st(s.length());
    for(int i=0;i<n;i++){
        st.push(s[i]);
    }
    for(int i=0;i<n;i++){
        st.pop();
    }
    return st;
}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
