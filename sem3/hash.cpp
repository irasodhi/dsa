#include <iostream>
using namespace std;

int main() {
    int arr[9];   

    for (int i = 0; i < 9; i++) {
        arr[i] = 11 + i;
    }
 
    for (int i = 0; i < 9; i++) {
        cout << "Index " << i << " -> " << arr[i] << endl;
    }

  
}
class Solution {
public:
    int minOperations(vector<int>& nums) {
             int n = nums.size();
 
        int g = nums[0];
        for (int x : nums)
            g = gcd(g, x);
        if (g != 1) return -1;  
 
        int ones = count(nums.begin(), nums.end(), 1);
        if (ones > 0) return n - ones;
 
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            int cur = nums[i];
            for (int j = i + 1; j < n; j++) {
                cur = gcd(cur, nums[j]);
                if (cur == 1) {
                    ans = min(ans, j - i + 1);
                    break;  
                }
            }
        }
 
        return (ans - 1) + (n - 1);
    }
    
};

class Solution {
public:
    int maxOperations(string s) {
        long long ans=0;
        long long ones=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ones++;
            }
            else{
                if(i+1==n||s[i+1]=='1')ans+=ones;
            }
        }
        return (int)ans;
    }
};