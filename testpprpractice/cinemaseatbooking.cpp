#include <iostream>
using namespace std;

int main() {
    int r;
    int c;
    cin>>r>>c;
    vector<vector<int>>seats(r,vector<int>(c));
    int k;
    cin>>k;
    for(int i=0;i<r;i++){
        int c=0;
        for(int j=0;j<c;j++){
            if(seats[i][j]==0){
                count++;
                if(count==k){
                    cout<<"avalable"<<i+1;
                    cout<<"start"<<j-k+2;
                }
            }
            else{
                c=0;
            }
        }
    }
    cout<<"Not avalable";
}