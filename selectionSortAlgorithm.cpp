#include <iostream>
using namespace std;

void selectionSort(int array[], int size){
    int i,j,min;
    for (int i = 0; i < size-1; i++){
            min = i;
        for (j= i+1; j < size; j++){
            if (array[j] < array[min]){
                min =j;
                int temp = array[min];
                array[min] = array[i];
                array[i] = temp;
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

    selectionSort(arr, arraySize);

    cout << "\nSorted Array in Ascending Order:";
    printArray(arr, arraySize);







    return 0;
}


/*
programiz.com/dsa/selection-sort
javatpoint.com/selection-sort

1- Set the first element as min.
2 - Compare min with with the second element.
If the .second element is smaller than minimum,
assign the second element as minimum.
3- go on

Time Complexity
Best Case: O(n^2)
Av. Case: O(n^2)
Worst Case: O(n^2)


*/

