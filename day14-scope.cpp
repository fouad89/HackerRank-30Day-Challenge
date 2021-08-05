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
    vector <int> __elements;

    // class construcor
    Difference(vector <int> elements){
        for (int i = 0; i < elements.size(); i++){
            for (int j=0; j<elements.size(); i++){
                if (i != j){
                    __elements[i] = abs(elements[i] - elements[j]);
                }
                
            }
        }
    
    int computeDifference(){
        int max =0;
        for (int i=0; i < __elements.size(); i++){
            if (__elements[i] > max)
            {
                max = __elements[i];
            }

        }
        return max;
    }
    }
};
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    vector <int> testVect;
    for (int i = 0; i < 5; i++){
        testVect.push_back(arr[i]);
    }
    
    Difference* testArray = new Difference (testVect);
    // cout << testVect.computeDifference();
    computeDifference(testArray);
    


    return 0;
}






