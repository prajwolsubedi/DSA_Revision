#include<iostream>
#include<vector>
using namespace std;

void bubbleSortIterative(vector<int>& arr){
    int n = arr.size();
    bool swapped; //to check if any swapping happened

    for(int i=0; i < n-1 ;i++){
        swapped = false;
        for(int j = 0; j < n - i -1; j++){ //-i cause last i elements are already swapped
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
}

void bubbleSortRecursive(vector<int>& arr, int n) {
    if (n == 1)
        return;

    bool swapped = false;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            swapped = true;
        }
    }

    // If no swaps happened, array is already sorted
    if (!swapped)
        return;

    bubbleSortRecursive(arr, n - 1);
}


int main(){
    vector<int> arr ={3,1,2,67,32,50};
    cout<<"Original Array: ";
    for(int x : arr) cout << x << " ";
    cout<<endl;

    bubbleSortIterative(arr);

    cout<<"Sorted Array: ";
    for(int x: arr) cout<<x<<" ";
    cout <<endl;
    return 0;
}


/**
 * @brief 
 * Time complexity - O(n^2)
 * Sum of n natural numbers = n(n+1) / 2
 * if swapped added best case = O(n) if the elements are aleady sorted(only)
 */