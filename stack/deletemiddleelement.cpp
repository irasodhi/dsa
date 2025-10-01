#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>&input,int count,int size){
    if(count==size/2){
    input.pop();
    return;
    }
    int num=input.top();
    input.pop();
    solve(input,count+1,size);
    input.push(num);


}
void deletem(stack<int>&input,int n){
int count=0;
solve(input,count,n);
}