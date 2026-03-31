#include <iostream>
#include <vector>
using namespace std;

int findLargest(vector<int>& arr) {
    int maxElement = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findLargest(arr);
    cout << "Largest element: " << result << endl;

    return 0;
}