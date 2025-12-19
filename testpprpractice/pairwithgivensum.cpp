// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         bool found=false;
//        for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 found=true;
//                 break;
//             }
          
//         }
//        }
//        if(found)cout<<"found";
//        else{
//         cout<<"Not found";
//        }

       
//     }
    
// }

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++) 
        cin >> arr[i];

        int left = 0, right = n - 1;
        bool found = false;
        while(left < right) {
            int sum = arr[left] + arr[right];
            if(sum == k) {
                found = true;
                break;
            } else if(sum < k) {
                left++;
            } else {
                right--;
            }
        }

        if(found) cout << "Found" << endl;
        else cout << "Not Found" << endl;
    }
    return 0;
}
