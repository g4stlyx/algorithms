#include <iostream>
using namespace std;

void merge(int array[], int beg,int mid,int end){
    int n1= mid - beg +1; // size of first subarray
    int n2= end-mid; // size of second subarray

    int leftArray[n1],rightArray[n2];

    for(int i=0; i<n1;i++){
        leftArray[i]= array[beg+i];
    }
    for(int j=0;j<n2;j++){
        rightArray[j]= array[mid+1+j];
    }

    int i,j,k;
    i=0;
    j=0;
    k=beg;

    while(i<n1 && j < n2){
        if(leftArray[i]<= rightArray[j]){
            array[k] = leftArray[i];
            i++;
        }
        else{
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        array[k] = leftArray[i];
        i++;
        k++;
    }
    while(j<n2){
        array[k] = rightArray[j];
        j++;
        k++;
    }

}

void mergeSort(int array[], int beg,int end){
    if(beg<end){
        int mid = (beg+end)/2;
        mergeSort(array,beg,mid);
        mergeSort(array,mid+1,end);
        merge(array,beg,mid,end);
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

    mergeSort(arr,0,arraySize-1);

    cout << "\nSorted Array in Ascending Order:";
    printArray(arr, arraySize);







    return 0;
}


/*
programiz.com/dsa/merge-sort
javatpoint.com/merge-sort

Divide & Conquer Logic

1- Create copies of the subarrays L <- A[p..q] and M <- A[q+1..r].
2- Create three pointers i, j and k
2.1- i maintains current index of L, starting at 1
2.2- j maintains current index of M, starting at 1
2.3- k maintains the current index of A[p..q], starting at p.
3- Until we reach the end of either L or M, pick the larger among the elements from L and M and place them in the correct position at A[p..q]
4- When we run out of elements in either L or M, pick up the remaining elements and put in A[p..q]

Time Complexity
Best Case: O(n*logn)
Av. Case: O(n*logn)
Worst Case: O(n*logn)


*/

