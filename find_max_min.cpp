#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 30, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0], min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    cout << "Max: " << max << "\nMin: " << min;
    return 0;
}
