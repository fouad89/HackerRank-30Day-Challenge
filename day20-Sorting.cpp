#include <iostream>
#include <vector>
using namespace std;

/* 
Sorting using Bubble Sort Algorithm which 
repeatedly swaps the adjacent elements if they are in wrong order.


Given an array, a, of size n distinct elements,
sort the array in ascending order using the Bubble Sort algorithm above. 
Once sorted, print the following 3 lines:

Array is sorted in numSwaps swaps.
where numSwaps is the number of swaps that took place.
First Element: firstElement
where firstElement is the first element in the sorted array.
Last Element: lastElement
where lastElement is the last element in the sorted array.
 */

void swap(int* num1, int* num2){
    int temp = *num2;
    *num2 = *num1;
    *num1 = temp;

}

void bubbleSort(int arr [], int n){
    int numSwaps = 0;
    int firstElement, lastElement;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                numSwaps+=1;
            }
        }
    }
    firstElement = arr[0];
    lastElement = arr[n-1];
    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First Element: " << firstElement << endl;
    cout << "Last Element: " << lastElement << endl;
}

int main(){
    int n;
    cin >> n;
    int userArr[n];
    for (int i = 0; i < n; i++){
        cin >> userArr[i];
    }
    bubbleSort(userArr, n);
    

}