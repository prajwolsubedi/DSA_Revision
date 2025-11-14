#include<iostream>
#include<vector>
using namespace std;
void insertionSortOriginLogic(vector<int>& a){
    int n = static_cast<int>(a.size());
    for(int i=0; i<n-1 ; i++){
        for(int j=i+1; j>0; j--){
            if(a[j] < a[j-1])
                swap(a[j], a[j-1]);
        }
    }
}

void insertionSortOptimized(vector<int>& arr){
    int n = static_cast<int>(arr.size());
    for(int i=1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            if(arr[j] > arr[j+1]){
                arr[j+1] = arr[j];
                j = j - 1;
            }
        arr[j+1] = key;
        }
    }
}

int main(){
    vector<int> arr = {5,4,3,2,1};
    cout<<"Original Array: "<<endl;
    for (int x:arr) cout<<x<<" ";
    cout<<endl;
    insertionSortOptimized(arr);
    cout<<"Sorted Array: "<<endl;
    for (int x:arr) cout<<x<<" ";
    cout<<endl;
    return 0;
}


/***
 * 
 * Time Complexity - O(n^2)
 * - Sum of n-1 natural numbers both for comparision and swapping(moving)
 * sum of n natural number's formula is n(n+1)/2
 * best case is O(n) cause only comparing and no swapping
 * 
 */