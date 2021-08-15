#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

/* 
Task
The AdvancedArithmetic interface and the method declaration for the abstract divisorSum(n) method are provided for you in the editor below.

Complete the implementation of Calculator class, which implements the AdvancedArithmetic interface. 
The implementation for the divisorSum(n) method must return the sum of all divisors of n.
 */

class AdvancedArithmetic{
public:
    virtual int divisorSum(int n) = 0; // virtual method
};
class Calculator: public AdvancedArithmetic // inhert from AdvancedArithmetic class
{
public:
    vector<int> divisors; // to save all the divisors
    int divisorSum(int n){
        int totalSum = 0; // total sum of all diviors
        for (int i = 1; i <= n; i++){
            if (n % i == 0){ // to get the divsor, where remainder is zero when its a divsor
                divisors.push_back(i); // adding divisors to the vector
                totalSum+=i; // adding to the total sum
            }
        }
        return totalSum;
    }

};

int main()
{
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); // creating an instance
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum << endl;
}
