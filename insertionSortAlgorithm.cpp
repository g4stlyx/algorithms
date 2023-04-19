#include <iostream>
using namespace std;

void insertionSort(int array[], int size){
    int i,j,temp;
    for (int i = 0; i < size; i++){
        temp = array[i];
        j= i -1;
        while(j>=0 && temp <= array[j]){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = temp;
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

    insertionSort(arr, arraySize);

    cout << "\nSorted Array in Ascending Order:";
    printArray(arr, arraySize);







    return 0;
}


/*
programiz.com/dsa/insertion-sort
javatpoint.com/insertion-sort

1-If the element is the first element, assume that it is already sorted. Return 1.
2-Pick the next element, and store it separately in a key.
3-Now, compare the key with all elements in the sorted array.
4-If the element in the sorted array is smaller than the current element, then move to the next element. Else, shift greater elements in the array towards the right.
5-Insert the value.
6-Repeat until the array is sorted.

Time Complexity
Best Case: O(n)
Av. Case: O(n^2)
Worst Case: O(n^2)


*/

