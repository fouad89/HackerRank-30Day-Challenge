#include <iostream>
#include <vector>
using namespace std;

/* 
Generics: (basically the ability to pass a data type as an argument)
The method of Generic Programming is implemented to increase the efficiency of the code. Generic Programming enables the programmer to write a general algorithm which will work with all data types. It eliminates the need to create different algorithms if the data type is an integer, string or a character.

The advantages of Generic Programming are

1. Code Reusability
2. Avoid Function Overloading
3. Once written it can be used for multiple times and cases.

Task
Write a single generic function named printArray; 
this function must take an array of generic elements as a parameter 
(the exception to this is C++, which takes a vector). 
The locked Solution class in your editor tests your function.

 */

// generic template
template <typename T>
void printArray(vector <T> arr){
    //printing elements
    for (auto elem : arr){
        cout << elem << endl;
    }

}

int main(){
    int n;
    cin >> n;
    vector<int> intVector; // example int vector
    for (int i = 0; i < n; i++){
        cin >> intVector[i]; // adding vector elements
    }
    printArray(intVector);

}
