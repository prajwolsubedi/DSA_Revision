#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>& a){
    int n = static_cast<int>(a.size());
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(a[j] < a[min_index]){

                ////min = a[j]; //Note my first approach was this which is wrong cause we need the index where the smallest is to swap not just the smallest element( we need to maintain the elements in array as it is.)
                min_index = j;
            }
        }
        cout<<"Swapping elements a[i] : "<<a[i]<<" and min_index: "<<min_index<<endl;
        swap(a[i], a[min_index]);
        cout<<"New Array: "<<endl;
        for (int x:a) cout<<x<<" ";
        cout<<endl;
    }
}

int main(){
    vector<int> arr = {5,4,3,2,1};
    cout<<"Original Array: "<<endl;
    for (int x:arr) cout<<x<<" ";
    cout<<endl;
    selectionSort(arr);
    cout<<"Sorted Array: "<<endl;
    for (int x:arr) cout<<x<<" ";
    cout<<endl;
    return 0;
}
