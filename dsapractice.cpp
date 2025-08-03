// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//    int max=arr[0];
//    int min=arr[0];
//    for(int i=0;i<n;i++){
//    if(max>arr[i]){
//     max=arr[i];
//    }
//    if(min<arr[i]){
//     min=arr[i];
//    }

// }
// cout<<min<<" "<<max;
// }


// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//    for(int i=n-1;i>=0;i--){
//     cout<<arr[i]<<" ";
//    }
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void leftrotae(vector<int>&arr,int k){
    int n=arr.size();
    k=k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
}
int main() {
 vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    leftrotae(arr, k);

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}