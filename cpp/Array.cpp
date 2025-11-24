#include<bits/stdc++.h>
using namespace std;

// bool isSorted(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]<arr[j])
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int arr[] = {9,2,4,6,7,1},n=6;
//     bool ans = isSorted(arr,n);
//     if(ans)
//     cout<<"true";
//     else
//     cout<<"false";
//     return 0;
// }


// int removeDuplicates(int arr[],int n){
//     int i=0; 
//     for(int j=1; j<n; j++){
//         if(arr[i]!=arr[j])
//         i++;
//         arr[i] = arr[j];
//     }
//     return i+1;
// }
// int main(){
//     int arr[] = {1,1,1,2,2,3,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = removeDuplicates(arr,n);
//     for(int i=0; i<k; i++){
//         cout<<arr[i];
//     }
// }


// int main() {
//     int arr[] = {10, 20, 30, 40, 50}; // Example array and find the second element of array.
//     int size = sizeof(arr) / sizeof(arr[0]);
//     if (size < 2) {
//         cout << "Array does not have a second element." << endl;
//     } else {
//         cout << "The second number in the array is: " << arr[1] << endl;
//     }
//     return 0;
// }


// int main() {
//     int arr[] = {10, 20, 30, 40, 50}; // find the second last element in array.
//     int n = sizeof(arr) / sizeof(arr[0]);
//     if (n < 2) {
//         cout << "Array must have at least two elements." << endl;
//     } else {
//         cout << "The second last element is: " << arr[n - 2] << endl;
//     }
//     return 0;
// }


