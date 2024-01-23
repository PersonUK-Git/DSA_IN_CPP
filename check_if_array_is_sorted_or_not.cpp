// check if array is sorted or not
#include <iostream>

using namespace std;

bool sortedArr(int arr[], int n)
{
    if(n==1){return 1;}
    bool restArr = sortedArr(arr + 1, n - 1);
    return(arr[0] < arr[1] && restArr);
    
}

int main()
{
    int arr[] = {1, 4, 2, 3, 4};
    int arr2[] = {1, 2, 3, 4, 5};
    cout<<sortedArr(arr, 5)<<endl;
    cout<<sortedArr(arr2, 5)<<endl;
    return 0;
}