#include <iostream>
using namespace std;
yehhhh bhi dekh liyoo

int nearestLargerDistance(int arr[], int n, int index) {
    for (int dist = 1; dist < n; dist++) {
       
        if (index - dist >= 0 && arr[index - dist] > arr[index])
            return dist;
        
        if (index + dist < n && arr[index + dist] > arr[index])
            return dist;
    }
    return -1;  
}

int main() {
    int n, index;
    cin >> n >> index;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << nearestLargerDistance(arr, n, index) << endl;
    return 0;
}
