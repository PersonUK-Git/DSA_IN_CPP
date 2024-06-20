
#include <iostream> // Include the iostream library for input and output operations

using namespace std; // Use the standard namespace, so we don't have to type std:: every time

// Function to print out an array
void printArr(int arr[], int n)
{
    // Loop through the array and print each element
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Print the element
    }
    cout << endl; // Print a newline after the array
}

// Function to swap every other element of an array
void swapAlternate(int arr[], int size)
{
    // Loop through the array, swapping every other element
    for (int i = 0; i < size; i += 2)
    {
        // Check that the current element is not the last element
        if (i + 1 < size)
        {
            // Swap the current element with the next element
            swap(arr[i], arr[i + 1]);
        }
    }
}

// The main function, where the program starts
int main()
{
    // Define two arrays, even and odd, with different sizes
    int even[8] = {1, 5, 2, 3, 7, 8};
    int odd[5] = {1, 4, 2, 6, 5};

    // Call the function to swap every other element of the even array
    swapAlternate(even, 5);
    // Call the function to print out the even array
    printArr(even, 5);
}
