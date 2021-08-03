#include <iostream>
#include <iomanip>
using namespace std;
/* Objective
In this challenge, we learn about conditional statements. 
Check out the Tutorial tab for learning materials and an instructional video.

Task
Given an integer n , perform the following conditional actions:

If n is odd, print Weird
If n is even and in the inclusive range of 2 to 5, print Not Weird
If n is even and in the inclusive range of 6 to 20, print Weird
If n is even and greater than 20, print Not Weird
 */

void actions(int n){
    if (n % 2 != 0){
        cout << "Weird" << endl;
    } else if (n % 2 == 0 && n >=2 && n<=5)
    {
        cout << "Not Weird" << endl;
    } else if (n % 2 == 0 && n >= 6 && n <=20)
    {
        cout << "Weird" << endl;
    } else if (n % 2 ==0 && n > 20) {
        cout << "Not Weird" << endl;
    }else{
        cout << "Out of range" << endl;
    }

}


int main(){
    int N;
    int i=0;

    do
    {   
        cout << "enter an enteger: " << endl;
        cin >> N;
        actions(N);
        i++;
    } while (i < 5);
    


    return 0;
}