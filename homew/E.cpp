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

    int minIndex = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    int temp = arr[0];
    arr[0] = arr[minIndex];
    arr[minIndex] = temp;

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}