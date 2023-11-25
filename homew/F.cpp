#include <iostream>
#include <limits>

using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxIndex = n - 1;
    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = arr[n - 1];
    arr[n - 1] = arr[maxIndex];
    arr[maxIndex] = temp;

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}