#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);
    return 0;
}
