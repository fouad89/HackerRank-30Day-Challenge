#include <iostream>
using namespace std;

/* 
Objective
In this challenge, we will use loops to do some math. Check out the Tutorial tab to learn more.

Task
Given an integer, n, print its first 10 multiples. Each multiple n x i (where 1 <= i <= 10) 
should be printed on a new line in the form: n x i = result.
 */

int main(){
    int n;
    int count = 10;
    int multiple;
    cin >> n;

    for (int i = 1; i <= count; i++)
    {
        multiple = n * i;
        cout << ""<<n<<" x "<<i<<" = "<<multiple<<"\n";
    }
    

    return 0;
}