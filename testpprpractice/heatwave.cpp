#include <iostream>
using namespace std;

int main() {
    vector<string>days={
        'Sunday','Monday','Tuesday','Wednesday','Thursday','Friday','Saturday'
    };
    int temp[7][4];
    double maxavg=-1;
    int hott=0;
    for(int i=0;i<7;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=temp[i][j];
        }
        double avg=sum/4;
        if(avg>maxavg){
            maxavg=avg;
            hott=i;
        }
    }
    cout<<day[hott];
}