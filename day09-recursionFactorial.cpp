#include <iostream>
using namespace std;

/* 
Recursive Method for Calculating Factorial
Function Description
Complete the factorial function in the editor below. Be sure to use recursion.

factorial has the following paramter:

int n: an integer

 */

int factorial(int n){
    int result;
    if (n > 1){
        result = n * factorial(n-1);
    } else{
        result = 1;
    }
    return result;
}

int main(){
    int num, result;
    cout << "Which number do you have: " << endl;
    cin >> num;
    result = factorial(num);
    cout << result << endl;
}