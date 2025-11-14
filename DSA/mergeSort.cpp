// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(vector<int>& a, int left, int mid, int right){
//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     vector<int> L(n1), R(n2);

//     for(int i=0; i<n1; i++)
//         L[i] = a[left + i];
//     for(int j=0; j<n2; j++)
//         R[j] = a[mid + 1 + j];

//     //now merging the two sorted array;
//     int i = 0;
//     int j = 0;
//     int k = left;

//     while(i<n1 && j<n2){
//         if(L[i] <= R[j]){
//             a[k] = L[i];
//             i++;
//         }
//         else{
//             a[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while(i<n1){
//         a[k] = L[i];
//         k++;
//         i++;
//     }

//     while(j<n2){
//         a[k] = R[j];
//         k++;
//         j++;
//     }

// }

// // Recursive function that divides and sorts the array
// void mergeSort(vector<int>& a, int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;  // same as (left + right)/2 but safer

//         // Divide step
//         mergeSort(a, left, mid);
//         mergeSort(a, mid + 1, right);

//         // Conquer step (merge the sorted halves)
//         merge(a, left, mid, right);
//     }
// }

// int main() {
//     vector<int> arr = {5, 2, 4, 7, 1, 3, 2, 6};

//     cout << "Original array:\n";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     mergeSort(arr, 0, arr.size() - 1);

//     cout << "Sorted array:\n";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    cout << "merge(" << start << ", " << mid << ", " << end << ")\n";

    cout << "Before merge: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    int n1 = mid - start + 1;
    int n2 = end - mid;
    vector<int> L(n1);
    vector<int> R(n2);
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[i + start];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[j + mid + 1];
    }
    int k = start;
    int i = 0;
    int j = 0;
    while (i < n2 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = R[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = L[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        k++;
        j++;
    }
    cout << "After merge: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}

void mergeSort(vector<int> &arr, int start, int end)
{
    cout << "mergeSort(" << start << ", " << end << ")\n";
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    vector<int> arr = {5, 6, 77, 89, 34, 1};
    cout << "Original Array: " << endl;
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    cout << "Sorted Array: " << endl;
    mergeSort(arr, 0, static_cast<int>(arr.size()) - 1);
    for (int x : arr)
        cout << x << " ";

    return 0;
}

