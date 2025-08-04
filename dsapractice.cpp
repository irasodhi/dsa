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


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void leftrotae(vector<int>&arr,int k){
//     int n=arr.size();
//     k=k%n;
//     reverse(arr.begin(),arr.begin()+k);
//     reverse(arr.begin()+k,arr.end());
//     reverse(arr.begin(),arr.end());
// }
// int main() {
//  vector<int> arr = {1, 2, 3, 4, 5};
//     int k = 2;

//     leftrotae(arr, k);

//     for (int num : arr) {
//         cout << num << " ";
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int>freq(n,0);
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<i<<"-"<<freq[i]<<endl;
//     }
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int index=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr[index]=arr[i];
//             index++;
//         }
//     }
//     while(index<n){
//         arr[index]=0;
//         index++;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int min=INT_MIN;
//     int second=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]>min){
//             second=min;
//             min=arr[i];
//         }
//         else if(arr[i]>second && arr[i]!=min){
//             second=arr[i];
//         }
//     }
//     cout<<second;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int s=0;
//     int end=n-1;
//     bool ispalindrome=false;
//     for(int i=0;i<n;i++){
//         if (arr[s]==arr[end]){
//             ispalindrome=true;
//             break;
//         }
    
//     }
//     if (ispalindrome){
//         cout<<"palindrome";
//     }
//     else{
//         cout<<"not palindrome";
//     }
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> matrix(r, vector<int>(c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }
    int sumc=0;
       for (int i = 0; i < r; i++) {
        
        int sumr=0;
        for (int j = 0; j < c; j++) {
            sumr+=matrix[i][j];
         
         
        }
           cout<<sumr<<endl;
    }
    for (int j=0;j<c;j++){
        int sumc=0;
        for(int i=0;i<r;i++){
            sumc+=matrix[i][j];
            
        }
        cout<<sumc<<endl;
    }
  

}
