#include <iostream>
#include <cmath>
using namespace std;

/* Task
Given an array, A, of N  integers, 
print A's elements in reverse order as a single line of space-separated numbers.
 */

int main(){
    int N;
    // create array of unknown size n
    int* A = new int[N]; 
    cin >> N;
    
    for (int i=0; i < N; i++){
        cin >> A[i];
    }

    for (int j=N-1; j >=0; j--){
        cout << A[j] << " ";
    }

    return 0;
}