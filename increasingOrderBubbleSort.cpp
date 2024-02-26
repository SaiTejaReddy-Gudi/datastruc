// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,1,4,19,-1,1,2,5,8,7,3};
    int length = sizeof(arr) / sizeof(int);

    // Bubble sort algorithm
    //passes
    for (int pass = 0; pass < length; pass++) 
    {
        //checking n times for wrong order
        for (int idx = 0; idx < length - 1; idx++) 
        {
            if (arr[idx] > arr[idx + 1]) {
                //  correcting wrong order
                    int temporary = arr[idx];
                    arr[idx]=arr[idx+1];
                    arr[idx + 1] = temporary;
            }
        }
    }

    // Printing the sorted array
    for (int idx = 0; idx < length; idx++) {
        cout << arr[idx] << " ";
    }

    return 0;
}