#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& a, int left, int right){
    int pivot = a[left];
    int i = left;
    for (int j = left + 1; j <= right; j++){
        if(a[j] <= pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[left], a[i]);
    return i;
}

void quickSort(vector<int>& a, int left, int right){
    if(left < right){
        int pivot = partition(a, left, right);
        quickSort(a, left, pivot-1);
        quickSort(a, pivot+1, right);
    }
}


int main() {
    vector<int> arr = {5, 2, 4, 7, 1, 3, 2, 6};

    cout << "Original array:\n";
    for (int x : arr) cout << x << " ";
    cout << endl;

    quickSort(arr, 0, static_cast<int>(arr.size())- 1);

    cout << "Sorted array:\n";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;

}











/*
First Logic
#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& a, int left, int right){
    int pivot = a[left];
    int i = left;
    int j;
    for ( j = left + 1; j <= right; j++){
        if(a[j] <= pivot){
            swap(a[i], a[j]);
            i++;
        }
    }
    swap(pivot, a[i]);
    return i;
}

void quickSort(vector<int>& a, int left, int right){
    if(left < right){
        int pivot = partition(a, left, right);
        quickSort(a, left, pivot-1);
        quickSort(a, pivot+1, right);
    }
}


int main() {
    vector<int> arr = {5, 2, 4, 7, 1, 3, 2, 6};

    cout << "Original array:\n";
    for (int x : arr) cout << x << " ";
    cout << endl;

    quickSort(arr, 0, static_cast<int>(arr.size())- 1);

    cout << "Sorted array:\n";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
*/

