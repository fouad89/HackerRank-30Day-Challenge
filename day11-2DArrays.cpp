#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

/* Given a 6 x 6 array of 1s and 0s, find 
Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.
an hour glass has the format of:
needs test
a b c
  d
e f g

 */

int add(int arr[6][6], int arr_i, int arr_j){
    int sum = arr[arr_i][arr_j];
    sum += arr[arr_i][arr_j + 1];
    sum += arr[arr_i][arr_j + 2];
    sum += arr[arr_i + 1][arr_j + 1];
    sum += arr[arr_i + 2][arr_j];
    sum += arr[arr_i + 2][arr_j + 1];
    sum += arr[arr_i + 2][arr_j + 2];
    return sum;
}

int main(){
    int sum, max;
    int rowSize = 6;
    int colSize = 6;
    int myArr [rowSize][colSize];
    int testArr [6][6]= {
        {0, 1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10, 11},
        {12, 13, 14, 15, 16, 17},
        {18, 19, 20, 21, 22, 23},
        {24, 25, 26, 27, 28, 29},
        {30, 31, 32, 33, 34,35}
    };

    for (int i = 0; i < 4; i++){
        for (int j=0; j < 4; j++){
            sum = add(testArr, i, j);

        }
        if (sum > max){
            max = sum;
        }
    }
    cout << "Maximum hour glass sum: " <<sum << endl;



    return 0;
}