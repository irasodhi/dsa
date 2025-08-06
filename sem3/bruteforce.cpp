
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

// #include <iostream>
// using namespace std;

// void printSubarraysSlidingWindow(int arr[], int n) {
//     for (int w = 1; w <= n; w++) {
//         for (int start = 0; start <= n - w; start++) {
//             int end = start + w - 1;

//             cout << "[ ";
//             for (int i = start; i <= end; i++) {
//                 cout << arr[i] << " ";
//             }
//             cout << "]" << endl;
//         }
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Subarrays using sliding window style:" << endl;
//     printSubarraysSlidingWindow(arr, n);

//     return 0;
// 
//}





// #include <iostream>
// using namespace std;

// void selection(int arr[], int n) {
//     for(int i = 0; i < n - 1; i++) {
//         int minindex = i;
//         for(int j = i + 1; j < n; j++) {
//             if(arr[j] < arr[minindex])
//                 minindex = j;
//         }
//         int temp = arr[minindex];
//         arr[minindex] = arr[i];
//         arr[i] = temp;
//     }
// }

// int main() {
//     int arr[4] = {1, 2, 3, 4};
//     int n = 4;

//     selection(arr, n);

//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     Node* head=new Node();
    
// }



// #include <iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;



// bool findtriplet(vector <int>& arr,int k){
// sort(arr.begin(),arr.end());
// for(int i=0;i<arr.size()-2;i++){
//     int left=i+1;
//     int right=arr.size()-1;
//     while(left<right){
//         int sum=arr[i]+arr[left]+arr[right];
//         if (sum==k)
//         return true;
//         else if(sum<k){
//         left++;
//         }
//         else{
//             right--;
//         }
//     }
   
// } return false;

// }

// int main() {



   
// }




// #include <iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;

// void mergesort(int m,vector<int>&arr1,int n,vector<int>&arr2){
//     int i=m-1;
//     int j=n-1;
//     int k=m+n-1;
//     while(i>=0 && j>=0){
//         if(arr1[i]>arr2[j]){
//             arr1[k]=arr1[i];
//             i--;
//         }
//         else{
//             arr1[k]=arr2[j];
//             j--;
//         }
//         k--;
//     }
//         while(j>=0){
//             arr1[k]=arr2[j];
//             j--;
//             k--;
           
           
//         }
//         k--;

//     }
// };


// #include <iostream>
// #include<vector>
// using namespace std;


// void duplicate(vector<int>& num){
//     int i=0;
//     for(int j=0;j<num.size();j++){
//         if(num[j]!=num[i]){
//             num[++i]=num[j];
//         }
//     return i+1;
//     }

// }


// #include <iostream>
// #include <vector>
// using namespace std;
// int subarray(int k,vector<int>& num){
//     int left=0;int minl=INT_MAX;int sum=0;
//     for(int i=0;i<num.size();i++){
//         sum+=num[i];
 
//     while(sum>=k){
//         minl=min(minl,i-left+1);
//         sum-=num[left++];

//     }
// }
// return minl==INT_MAX? 0:minl;

// }
// int main() {
//     vector<int> nums = {2, 3, 1, 2, 4, 3};
//     int k = 7;
//     cout << subarray(k, nums); // Output: 2
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int atmost(int k,vector<int> &num){
//     int res=0;int left=0;
//     for(int right=0;right<num.size();++right){
//         if(num[right]%2==1)k--;
//         while(k<0){
//             if(num[left++]%2==1)k++;
//         }
//         res+=right-left+1;
//     }
//     return res;
// }