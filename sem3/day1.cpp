// #include <iostream>
// using namespace std;

// int main() {
//    string s;
//    cin>>s;
//    for(int i=s.length()-1;i>=0;i--){
//     cout<<s[i];
//    }
// }

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
   // map<int,string> map1;
   // //inserting the pairs 
   // //syntax map1[key]=value
   // map1[1]="India";
   // map1[2]="USA";
   // //how many pair entries
   // cout<<map1.empty()<<endl;
   // cout<<map1[1]<<endl;
   // cout<<map1.at(4)<<endl;
   // cout<<map1.size()<<endl;
   // for(const auto& pair:map1){
   //    cout<<"key"<<pair.first<<", Value:"<<pair.second<<endl;
   // }
//    int nums[]={1,2,3,4,3,2,4};
//    map<int,int>freq;
//    for(int num:nums){
//       if(freq.find(num)!=freq.end()){
//       freq[num]=++;

//    }
// else{
//    freq[num]=1
// }
//    for(const auto& pair:freq){
//       cout<<pair.first<<pair.second<<endl;
//    }





// }
// }

// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cin>>n;
//    int k;
//    cin>>k;

//    int arr[n];
//    for (int i=0;i<n;i++){
//       cin>>arr[i];
//    }
//    for(int i=0;i<n;i++){
//       for(int j=i;j<n;j++){
//          if(arr[i]+arr[j]==k){
//             cout<<arr[i];
//          cout<<arr[j]<<" ";
//          }
         
//       }
//    }

// }

// //complexity o(n)
// #include <iostream>
// #include <vector>
// using namespace std;

// void evenoddcount(vector<int> &nums) {
//     int counteven = 0;
//     int countodd = 0;

//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] % 2 == 0)
//             counteven++;
//         else
//             countodd++;
//     }

//     cout << "Even count: " << counteven << endl;
//     cout << "Odd count: " << countodd << endl;
// }

// int main() {
//     int n;
//     cin >> n;
    
//     vector<int> arr(n);
    
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     evenoddcount(arr);

//     return 0;
// }
// #include <iostream>
// #include <vector>

// using namespace std;

// int findMax(vector<int> &nums) {
//     int maxNum = nums[0];  

//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] > maxNum) {
//             maxNum = nums[i];
//         }
//     }

//     return maxNum;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int maxValue = findMax(arr);
//     cout << "Maximum number: " << maxValue << endl;

//     return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int findMin(vector<int> &nums) {
//     int minNum = nums[0];  

//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] <minNum) {
//             minNum = nums[i];
//         }
//     }

//     return minNum;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int minValue = findMin(arr);
//     cout << "minimum  number: " << minValue << endl;

//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// void findSum(vector<int> &nums, int target) {
//     bool found = false;

//     for (int i = 0; i < nums.size(); i++) {
//         for (int j = i + 1; j < nums.size(); j++) {
//             if (nums[i] + nums[j] == target) {
//                 cout << "Pair found: " << nums[i] << " and " << nums[j] << endl;
//                 found = true;
//                 return; 
//             }
//         }
//     }

//     if (!found) {
//         cout << "No pair found  " << target << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int target = 7;
//     findSum(arr, target);

//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int findSecondLargest(vector<int> &nums) {
   
//     int first = nums[0];
//     int second = -1; 
//     for (int i = 1; i < nums.size(); i++) {
//         if (nums[i] > first) {
//             second = first;
//             first = nums[i];
//         } else if (nums[i] < first && (second == -1 || nums[i] > second)) {
//             second = nums[i];
//         }
//     }

//     return second;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     int result = findSecondLargest(arr);
//     if (result != -1)
//         cout  << result << endl;

//     return 0;
// }
  










// #include <iostream>
// #include <vector>
// using namespace std;

// void deleteelementinarratindex(vector<int> &nums, int index) {
//     if (index >= 0 && index < nums.size()) {
//         nums.erase(nums.begin() + index);
//     } else {
//         cout << "Invalid index" << endl;
//     }
// }

// int main() {
//     vector<int> arr = {10, 20, 30, 40, 50};

//     int index;
//     cin >> index;

//     deleteelementinarratindex(arr, index);

//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// void insertatindex(vector<int> &nums,int value,int index){
//    if(index<0||index>nums.size()){
//       cout<<"inavalid"<<endl;
//       return;

//    }
//    nums.push_back(0);
//    for (int i=nums.size()-1;i>index;i--){
//       nums[i]=nums[i-1];
//    }
//    nums[index]=value;
   
// };

// int main() {
//    vector<int>numbers={1,2,3,4,5};
//    int value=45;
//    int index=2;
//    cout<<numbers.size()<<endl;
//    for(int num:numbers){
//       cout<<num<<" ";
//    }
//    insertatindex(numbers, value, index);

//     cout << "After Insertion: ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     cout << endl;
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// void deleteatindex(vector<int>&nums,int value,int index){
//    if(index<0||index>nums.size()){
//       cout<<"invalid";
//       return;
//    }
//    for(int i=index;i<nums.size()-1;i++){
//       nums[i]=nums[i+1];
//    }
//    nums.pop_back();
// }
// int main() {
//     vector<int> numbers = {1, 2, 3, 4, 5};
//     int value = 45;
//     int index = 2;

//     cout << "Before Insertion: ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     cout << endl;


//     deleteatindex(numbers, index);

//     cout << "After Deletion at index " << index << ": ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// void moveZerosToEnd(vector<int> &nums) {
//     int insertPos = 0;

//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] != 0) {
//             nums[insertPos++] = nums[i];
//         }
//     }

//     while (insertPos < nums.size()) {
//         nums[insertPos++] = 0;
//     }
// }

// int main() {
//     vector<int> numbers = {0, 1, 0, 3, 12, 0, 4};

//     cout << "Before Moving Zeros: ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     cout << endl;

//     moveZerosToEnd(numbers);

//     cout << "After Moving Zeros:  ";
//     for (int num : numbers) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int freq(vector<int>&nums,int target){
//    int freqarr=[nums.size()]={0}
//    for(int i=0;i<)
//    return count;
// };
// int main() {
//     vector<int> nums = {1, 2, 3, 2, 4, 2, 5};
//     int target = 2;

//     int freque = freq(nums, target);
//     cout << "Frequency of " << target << ": " << freq << endl;

// }



// #include <iostream>
// #include <vector>
// using namespace std;

// void countFrequencies(const vector<int>& arr) {
//     int maxVal = 0;
//     for (int num : arr) {
//         if (num > maxVal) maxVal = num;
//     }

//     vector<int> freqArr(maxVal + 1, 0);

//     for (int num : arr) {
//         freqArr[num]++;
//     }

//     cout << "Element → Frequency" << endl;
//     for (int i = 0; i < freqArr.size(); i++) {
//         if (freqArr[i] != 0) {
//             cout << i << " → " << freqArr[i] << endl;
//         }
//     }
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 2, 1, 3, 4, 5, 2};

//     countFrequencies(arr);

//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std;

// bool isSorted(const vector<int>& arr) {
//     for (int i = 0; i < arr.size() - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             return false;  
//         }
//     }
//     return true;

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};  
//     if (isSorted(arr)) {
//         cout << "Array is sorted in ascending order." << endl;
//     } else {
//         cout << "Array is not sorted." << endl;
//     }

//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// void rotateRightByOne(vector<int>& arr) {
//     if (arr.empty()) return;

//     int last = arr.back(); 

//     for (int i = arr.size() - 1; i > 0; i--) {
//         arr[i] = arr[i - 1];
//     }

//     arr[0] = last;  
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};

//     rotateRightByOne(arr);

//     cout << "After right rotation by 1: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }
