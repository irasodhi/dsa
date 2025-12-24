#include <iostream>
using namespace std;

void bubble(int arr[],int n){
    int s=0,c=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            c++;
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                s++;
            }
        }
    }
}
void selectionsort(int arr[],int n){
    int c=0;int s=0;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
                c++;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
            s++;
        }

    }
}

void selectionsort(vector <int>&v){
    int s=0;
    int n=v.size();
    for(int i=1;i<n;i++){
        int k=v[i];
        int j=i-1;
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
            s++;
        }
        v[j+1]=key;

    }
    return shift;

}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}