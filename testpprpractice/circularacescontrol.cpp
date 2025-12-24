class Solution {
public:
    int search(vector<int>& arr, int K) {
        int low = 0, high = arr.size() - 1,ans=-1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == K)
                return mid;
            else if (arr[mid] < K)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};