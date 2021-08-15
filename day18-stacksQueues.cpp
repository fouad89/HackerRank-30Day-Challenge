#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
using namespace std;

/* 
Checking if a word is a palindrome (reads the same word forward and backward)
defenition: 
    A stack pushes a new element to the top of the stack and also pops the element at the top. 
    A queue, however, dequeues (removes) an element from the top of the queue, ​but it enqueues (inserts) an element at the bottom.

Write the following declarations and implementations:

Two instance variables: one for your stack, and one for your queue.
A void pushCharacter(char ch) method that pushes a character onto a stack.
A void enqueueCharacter(char ch) method that enqueues a character in the queue instance variable.
A char popCharacter() method that pops and returns the character at the top of the stack instance variable.
A char dequeueCharacter() method that dequeues and returns the first character in the queue instance variable.

 */

class Solution{
private:
    stack<char> stack_;
    queue<char> queue_;

public:
    void pushCharacter(char ch){
        stack_.push(ch);

    }
    void enqueueCharacter(char ch){
        queue_.push(ch);

    }
    char popCharacter(){
        char t = stack_.top(); // getting the top of the stack
        stack_.pop(); // pop
        return t;

    }
    char dequeueCharacter(){
        char f = queue_.front(); // 
        queue_.pop(); // pop
        return f;

    }

};

int main(){
    string s;
    // isPalindrome
    bool isPalindrome = true;
    getline(cin, s); //reading a string

    // creating a Soution object
    Solution obj;
    // adding string chars into queues and stacks
    for (int i = 0; i <s.length(); i++){
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    // compare the charchters
    // pop the top of the stack
    // dequeue the queue

    for (int i; i < s.length() / 2; i++){
        if (obj.popCharacter() != obj.dequeueCharacter())
        {
            isPalindrome = false;
            break;
        }
        
    }
    // checking if the word is a palindrome
    if (isPalindrome)
    {
        cout << "The word " << s << " is a palindrome. " << endl;
    }else{
        cout << "The word " << s << " is not a palindrome. " << endl;
    }
    

    return 0;
}