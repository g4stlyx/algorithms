#include <iostream>
using namespace std;

void bubbleSort(int array[], int size){

    for (int i = 0; i < size; i++){
        for (int i = 0; i < size - 1; i++){

            if (array[i] > array[i + 1]){
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << " " << array[i];
    }
    cout << "\n";
}
int main(){
    int arraySize;
    cout << "Enter the array size: ";
    cin>> arraySize;
    int arr[arraySize];

    for(int i=0;i<arraySize;i++){
        cout << "Enter the "<<i+1<<". element: ";
        cin >> arr[i];
    }

    cout << "\nUnsorted Array:";
    printArray(arr, arraySize);

    bubbleSort(arr, arraySize);

    cout << "\nSorted Array in Ascending Order:";
    printArray(arr, arraySize);







    return 0;
}


/*
programiz.com/dsa/bubble-sort
javapoint.com/bubble-sort

Compares two adjacent elements and swaps
them until they are in the intended order

1- compare 1st and 2nd elements
2- If the first element is greater than the second
element, they are swapped.
3- Now, compare the second and the third elements.
Swap them if they are not in order.
4- go on till the last element.


Time Complexity
Best Case: O(n)
Av. Case: O(n^2)
Worst Case: O(n^2)


*/

