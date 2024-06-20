#include <iostream>

using namespace std;

void printArr(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }cout <<endl;
}

void swapAlternate(int arr[], int size){
    for(int i =0 ; i< size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main()
{
       int even[8] =  {1, 5, 2, 3, 7, 8};
       int odd[5] = {1,4,2,6,5};

       swapAlternate(even , 5);
       printArr(even , 5);

}