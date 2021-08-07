#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

/* 
The absolute difference between two integers, a and b, is written as |a - b|. 
The maximum absolute difference between two integers in a set of positive integers,elements ,
 is the largest absolute difference between any two integers in __elements.


Task
Complete the Difference class by writing the following:

A class constructor that takes an array of integers as a parameter and saves it to the __elements instance variable.
A computeDifference method that finds the maximum absolute difference between any 2 numbers in __elements and stores it in the maximmumDifference instance variable.

Given:
a, b two integers
|a - b| is the absolute difference
elements: set of positive integers

 */

class Difference{
private:
    vector <int> elements;

public:
    int maxDifference;


    // class construcor
    Difference(vector <int> arr){
        elements = arr;
        maxDifference = 0;
    }

       
    // computing the difference
    void computeDifference(){
        int n = elements.size();
        // setting the max Difference
        for(int i = 0; i < n-1; i++){
                    for(int j = i; j < n-1; j++){
                        if(maxDifference < abs(elements[i]-elements[j+1])){
                            maxDifference = abs(elements[i]-elements[j+1]);
                        }
                    }
                }
        

    
    }
};
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    vector <int> testVect;
    for (int i = 0; i < 5; i++){
        testVect.push_back(arr[i]);
    }
    
    Difference d(testVect); // using test array
    // cout << testVect.computeDifference();
    d.computeDifference();
    cout << d.maxDifference;
    


    return 0;
}






