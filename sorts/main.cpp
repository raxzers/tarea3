#include <iostream>
#include "selection.h"
#include "insertion.h"
#include "bubble.h"
#include <chrono>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    std::chrono::steady_clock sc;   // create an object of `steady_clock` class
    auto start = sc.now();     // start timer

    bubble::sort(arr,n);

    auto end = sc.now();
    auto time_span = static_cast<std::chrono::duration<double>>(end - start);
    std::cout<<"bubble: "<<time_span.count()<<" seconds ";


    //insertion::sort(arr,n);
    //selection::sort(arr, n);
    printArray(arr, n);
    return 0;
}