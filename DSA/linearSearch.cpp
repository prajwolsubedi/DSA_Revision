
#include<iostream>
using namespace std;
int main(){
    int target, arr[5] = {20,30,40,50,60};
    cout<<"Enter the element you want to search: ";
    cin>>target;
    for(int i=0; i<5; i++){
        if(target == arr[i])
        {
            cout<<"The element is present in index '"<<i<<"'"<<endl;
            break;
        }
        cout<<"Current Index: "<<i<<endl;
    }
    cout<<"The element is not present in the array!";
    return 0;
}




/**
 * @brief 
 * - It is also called sequential searching.
 * NOTE: "break" statement just break out of the loop entirely.
- It is applicable for all data structures but for now we will discuss about array only.


# Compare the target element with all of the element on the array.- O(n)
 * 
 */

