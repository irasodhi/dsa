#include <iostream>
using namespace std;

/* Find first occurrence of target */
int firstOcc(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            ans = mid;
            high = mid - 1;   // search left
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

/* Find last occurrence of target */
int lastOcc(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            ans = mid;
            low = mid + 1;    // search right
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int k;
        cin >> k;

        int first = firstOcc(arr, n, k);
        int last = lastOcc(arr, n, k);

        if (first == -1)
            cout << 0 << endl;
        else
            cout << (last - first + 1) << endl;
    }
    return 0;
}
