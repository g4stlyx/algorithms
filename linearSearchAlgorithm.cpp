#include <iostream>
using namespace std;


int linearSearch(int n,int arr[],int valueToSearch){

    int pos = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==valueToSearch){
            pos = i;
            break;
        }
    }
    return pos;
}


int main(){

    int arraySize;
    cout << "Enter the number of elemenets array will have: ";
    cin>> arraySize;
    int arr[arraySize];

    for(int i=0;i<arraySize;i++){
        cout << "Enter the "<<i+1<<". element: ";
        cin >> arr[i];
    }

    int valueToSearch;
    cout << "Enter a value to search: ";
    cin >> valueToSearch;

    int pos = linearSearch(arraySize,arr,valueToSearch);

    if(pos==-1){
        cout << "The number you entered isn't an element of this array";
    }
    else{
        cout << "The index of the element is: "<<pos;
    }


    return 0;
}


    /*
    javapoint.com/linear-search

    Linear(Sequential) Search Algorithm
    Simplest searching alg.
    We traverse the list completely and match each element of the list with the item whose location is to be found.

    Its widely used when the list or array is unsorted.

    Time complexity of linear search is O(n)-n=array size-

    1)traverse the array elements using a for loop

    2)compare the search element with the current element:
    2.1)If the element matches, return the index of the corresponding array element.
    2.2)If not, move to the next element.

    3)If there's no match, return -1.

    Best Case Time Complexity : O(1)
    Average Case Time Complexity : O(n)
    Worst Case Time Complexity : O(n)

    Space Complexity: O(1)

    */

