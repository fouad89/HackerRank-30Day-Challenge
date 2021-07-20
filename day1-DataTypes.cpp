

/* Day 1:  
Task
Complete the code in the editor below. The variables i, d and s are already declared and initialized for you. You must:

1. Declare 3 variables: one of type int, one of type double, and one of type String.
2. Read 3 lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your  variables.
3. Use the + operator to perform the following operations:
    3.1. Print the sum of i plus your int variable on a new line.
    3.2. Print the sum of d plus your double variable to a scale of one decimal place on a new line.
    3.3. Concatenate s with the string you read as input and print the result on a new line.

Note: If you are using a language that doesn't support using  for string concatenation (e.g.: C),
 you can just print one variable immediately following the other on the same line. 
 The string provided in your editor must be printed first, immediately followed by the string you read as input.
 */

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int userInt;
    double userDouble;
    string userString;
    // 1 & 2
    cout << "Enter an INTEGER: " << endl;
    cin >> userInt;

    cout << "Enter a decimal number: " << endl;
    cin >> userDouble;
    cout << "Enter a sentence: " << endl;
    cin.ignore();
    getline(cin, userString);

    // task 3

    cout << i + userInt << endl;

    // spcified decimal scale 
    cout << fixed << setprecision(1) << d + userDouble << endl;
    cout << ""<<s<<"" << userString << endl;

    return 0;
}