#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 7;
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;
    int index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            index = mid;
            break;
        }

        // If target is greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;

        // If target is smaller, ignore right half
        else
            right = mid - 1;
    }

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}