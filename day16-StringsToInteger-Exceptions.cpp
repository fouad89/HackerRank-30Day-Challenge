#include <iostream>
using namespace std;

/* 
Objective
Today, we're getting started with Exceptions by learning how to parse an integer from a string and print a custom error message. 

Task
Read a string, S, and print its integer value; if S cannot be converted to an integer, print Bad String.
 */

int main(){
    string S;
    getline(cin, S);
    try
    {
        stoi(S);
        cout << stoi(S) <<endl;
        
    }
    catch(const std::invalid_argument& e)
    {
        cout << "Bad String"<< endl;
    }
    


    return 0;
}