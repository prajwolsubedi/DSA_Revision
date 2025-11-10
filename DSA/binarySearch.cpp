#include <iostream>
#include <vector>
using namespace std;

// ITERATIVE binary search
int binary_search_iterative(const vector<int>& a, int target) {
    int first = 0;
    int last = static_cast<int>(a.size()) - 1;

    while (first <= last) {
        int mid = first + (last - first) / 2;

        if (a[mid] == target)
            return mid;
        else if (a[mid] > target)
            last = mid - 1;
        else
            first = mid + 1;
    }
    return -1; // not found
}

// RECURSIVE binary search
int binary_search_recursive(const vector<int>& a, int first, int last, int target) {
    if (first > last)
        return -1; // base case: not found

    int mid = first + (last - first) / 2;

    if (a[mid] == target)
        return mid;
    else if (a[mid] > target)
        return binary_search_recursive(a, first, mid - 1, target);
    else
        return binary_search_recursive(a, mid + 1, last, target);
}

int main() {
    vector<int> arr = {5, 6, 7, 8, 9, 10, 11};
    int element;

    cout << "Enter the Element you want to search: ";
    cin >> element;

    // Iterative version
    int idx_iter = binary_search_iterative(arr, element);
    if (idx_iter >= 0)
        cout << "[Iterative] Element found at index " << idx_iter << endl;
    else
        cout << "[Iterative] Element not found in the array." << endl;

    // Recursive version
    int idx_rec = binary_search_recursive(arr, 0, static_cast<int>(arr.size()) - 1, element);
    if (idx_rec >= 0)
        cout << "[Recursive] Element found at index " << idx_rec << endl;
    else
        cout << "[Recursive] Element not found in the array." << endl;

    return 0;
}



/**
 * @brief 
 * 
 * Time Complexity is O(log(n))
 * n/2^k <= 1
 * n<=2^k
 * logn <= klog2
 * logn<=k
 * k >= logn
 * k = O(log(n))
 * 
 */
