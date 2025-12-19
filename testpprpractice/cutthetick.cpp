#include <iostream>
#include <algorithm>
using namespace std;

void cutSticks(int n, int arr[]) {
    sort(arr, arr + n); 
    
    int i = 0; 
    while (i < n) {
        cout << n - i << endl;  
        int cut = arr[i];
        

        while (i < n && arr[i] - cut <= 0) {
            arr[i] -= cut;
            i++;
        }
        for (int j = i; j < n; j++) {
            arr[j] -= cut;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    cutSticks(n, arr);
    return 0;
}
