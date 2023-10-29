#include <bits/stdc++.h>
using namespace std;

/*----------------selection sort---------------------------*/
/* void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int miniindex = i;
        for (int j = i; j <= n - 1; j++)
        {

            if (arr[j] < arr[miniindex])
            {

                miniindex = j;
            }
        }
        int temp = arr[miniindex];
        arr[miniindex] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}   */
/*-----------------------------------------*/

/*-----------Bubble_sort---------------------------------*/
/* void bubble_sort(int arr[], int n) {
    // bubble sort
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    // int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // cout << endl;

    bubble_sort(arr, n);
    return 0;
}  */
/*---------------------------------------------------------------*/


