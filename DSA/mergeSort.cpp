#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted halves of the array

/*

void merge(vector<int>& a, int left, int mid, int right) {
    // Sizes of the two subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    vector<int> L(n1), R(n2);

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
        L[i] = a[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    // Merge the two sorted halves back into 'a'
    int i = 0;      // index for left array
    int j = 0;      // index for right array
    int k = left;   // index for merged array

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from L[]
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements from R[]
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

*/

void merge(vector<int>& a, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for(int i=0; i<n1; i++)
        L[i] = a[left + i];
    for(int j=0; j<n2; j++)
        R[j] = a[mid + 1 + j];

    //now merging the two sorted array;
    int i = 0;
    int j = 0;
    int k = left;

    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }


    while(i<n1){
        a[k] = L[i];
        k++;
        i++;
    }

    while(j<n2){
        a[k] = R[j];
        k++;
        j++;
    }

}

// Recursive function that divides and sorts the array
void mergeSort(vector<int>& a, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // same as (left + right)/2 but safer

        // Divide step
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);

        // Conquer step (merge the sorted halves)
        merge(a, left, mid, right);
    }
}

int main() {
    vector<int> arr = {5, 2, 4, 7, 1, 3, 2, 6};

    cout << "Original array:\n";
    for (int x : arr) cout << x << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array:\n";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
