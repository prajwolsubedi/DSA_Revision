// #include<iostream>
// #include<vector>
// using namespace std;

// int partition(vector<int>& a, int left, int right){
//     int pivot = a[left];
//     int i = left;
//     for (int j = left + 1; j <= right; j++){
//         if(a[j] <= pivot){
//             i++;
//             swap(a[i], a[j]);
//         }
//     }
//     swap(a[left], a[i]);
//     return i;
// }

// void quickSort(vector<int>& a, int left, int right){
//     if(left < right){
//         int pivot = partition(a, left, right);
//         quickSort(a, left, pivot-1);
//         quickSort(a, pivot+1, right);
//     }
// }


// int main() {
//     vector<int> arr = {5, 2, 4, 7, 1, 3, 2, 6};

//     cout << "Original array:\n";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     quickSort(arr, 0, static_cast<int>(arr.size())- 1);

//     cout << "Sorted array:\n";
//     for (int x : arr) cout << x << " ";
//     cout << endl;

//     return 0;

// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int partition(vector<int>& a, int start, int end){
//     int pivot = a[end];
//     int i = start - 1;
//     for(int j = i+1; j <= end-1; j++){
//         if(a[j] < pivot){
//             ++i;
//             swap(a[j], a[i]);
//         }
//     }
//     i++;
//     swap(a[i], a[end]);
//     return i;

// }

// void quickSort(vector<int>& a, int start, int end){
//     if(start < end){
//         int pivotIndex = partition(a, start, end);
//         quickSort(a, start, pivotIndex-1);
//         quickSort(a, pivotIndex+1, end);
//     }
// }

// int main(){
//     vector<int> arr = {8,9,6,0,5,111,5};
//     cout<<"Original Array: "<<endl;
//     for (int x: arr) cout<<x<<" ";
//     cout<<endl;
//     quickSort(arr, 0, static_cast<int>(arr.size()) - 1);
//     cout<<"Sorted Array: "<<endl;
//     for(int x: arr) cout<<x<<" ";
//     cout<<endl;
// }



#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int start, int end){
    int pivot = arr[end];
    int i = start - 1;
    for(int j = start; j < end; j++){
        if(arr[j] < pivot){
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    i++;
    swap(arr[i], arr[end]);
    return i;

}

void quickSort(vector<int>& arr, int start, int end){
    if(start < end){
        int pivotIndex = partition(arr, start, end);
        quickSort(arr, start, pivotIndex - 1);
        quickSort(arr, pivotIndex+1, end);
    }
}

int main(){

    vector<int> arr = {5, 6, 77, 89, 34, 1, 100, 5, 999};
    cout << "Original Array: " << endl;
    for (int x : arr)
        cout << x << " ";
    cout << endl;
    cout << "Sorted Array: " << endl;
    quickSort(arr, 0, static_cast<int>(arr.size()) - 1);
    for (int x : arr)
        cout << x << " ";
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

