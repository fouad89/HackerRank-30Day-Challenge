#include <iostream>
#include <vector>
#include <string>
using namespace std;

/* 
Task
Given a base- 10 integer, n, convert it to binary (base-2). 
Then find and print the base-10 integer denoting the maximum number of consecutive 1's in n's binary 
representation.
When working with different bases, it is common to show the base as a subscript.
 */


vector<int> toBinary(int n){
    int remainder;
    vector <int> v;
    while (n > 0){
        remainder = n % 2;
        n /= 2;
        v.insert(v.begin(), remainder);
    }
    return v;
}
// function to count the continuous 1s
int contnCounter(vector<int> r){
    int max = 0, p = 0;
    for (int i=0; i < r.size(); i++){
        if (r[i] == 1){
            p++;
            if (p > max){
                max = p;
            }
            
        } else{
            p = 0;
        }
    }
    return max ; 
}
int main(){
    int n, max;
    vector<int> binaryVector;
    cin >> n;

    binaryVector = toBinary(n);
    max = contnCounter(binaryVector);

    cout << "Maximum of 1s is:" << max << endl;
    // show binary

    return 0;
}