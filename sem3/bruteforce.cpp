
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     bool found = false;
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] * 2 == arr[j] || arr[j] * 2 == arr[i]) {
//                 cout << "yes";
//                 found = true;
//                 break;
//             }
//         }
//         if (found) break; 
//     }

//     if (!found) cout << "no";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void cardandvalur(int nums[],int size){
//    for(int i=0;i<size-1;i++){
//       for(int j=i+1;j<size;j++){
//          if(nums[i]*2==nums[j]||nums[i]==nums[j]*2){
//             cout<<"yes"<<endl;
//             break;
//          }
//       }
//    }
//    cout<<"No"<<endl;
// }

// int main() {
//    int nums[]={1,2,3,4};
//    cardandvalur(nums,4);
// }




// #include <iostream>
// using namespace std;

// void cardandvalur(int nums1[], int nums2[], int size1, int size2) {
//    for(int i = 0; i < size1; i++) {
//       for(int j = 0; j < size2; j++) {
//          if (nums1[i] == nums2[j]) {
//             cout << "Yes" << endl;
//             return;  
//          }
//       }
//    }
//    cout << "No" << endl;
// }

// int main() {
//    int nums1[] = {1, 2, 3, 4};
//    int nums2[] = {5, 6, 7, 4}; 
//    cardandvalur(nums1, nums2, 4, 4);
// }






// #include <iostream>
// using namespace std;

// void sumtarget(int nums[],int size,int target){
//    for(int i=0;i<size-1;i++){
//       for(int j=i+1;j<size;j++){
//          if(nums[i]+nums[j]==target){
//             cout<<nums[i]<<nums[j]<<endl;
            
//          }
//       }
//    }
//    cout<<"No"<<endl;
// }

// int main() {
//    int nums[]={3,0,6,2,7};
//    sumtarget(nums,5,9);
// }



// #include <iostream>
// using namespace std;
// void equilibrium(int arr[],int size){
//    for(int i=0;i<size;i++){
//       int leftsum=0;
//       for(int j=0;j<i;j++){
//          leftsum+=arr[j];

//       }
//       int rightsum=0;
//       for(int j=i+1;j<size;j++){
//          rightsum+=arr[j];

//       }
//       if(leftsum==rightsum){
//          cout<<arr[i];
//       }
//    }
// }

// int main() {
//    int nums[]={1,3,5,2,2};
//    equilibrium(nums,5);
// }

