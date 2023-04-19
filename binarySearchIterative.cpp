#include <iostream>
using namespace std;


int binarySearch(int arr[],int low,int high,int value){
    int mid;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid]==value){
            return mid;
        }
        else if(arr[mid]<value){
            low = mid +1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}


int main(){

    int arraySize;
    cout << "Enter the size of the array: ";
    cin>> arraySize;
    int arr[arraySize];

    for(int i=0;i<arraySize;i++){
        cout<< "Enter the "<<i+1<<". element: ";
        cin>> arr[i];
    }

    int valueToSearch;
    cout << "Enter a value to search: ";
    cin >> valueToSearch;



    int pos = binarySearch(arr,0,arraySize,valueToSearch);



    if(pos==-1){
        cout << "The number you entered isn't an element of this array";
    }
    else{
        cout << "The index of the element is: "<<pos;
    }


    return 0;
}
