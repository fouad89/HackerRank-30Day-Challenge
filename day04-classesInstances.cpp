#include <iostream>
using namespace std;

/* Write a Person class with an instance variable, age , and a constructor that takes an integer, initialAge, as a parameter. 
The constructor must assign initialAge to age
after confirming the argument passed as initialAge is not negative; 
if a negative argument is passed as initialAge, the constructor should set age to 0 and print Age is not valid, setting age to 0.. In addition, 
you must write the following instance methods:

1. yearPasses() should increase the age instance variable by 1.
2. amIOld() should perform the following conditional actions:
    If age < 13, print You are young..
    If age >= 13 and <18, print You are a teenager..
    Otherwise, print You are old.. */

class Person{

public:
    int Age;
   
    void yearPass(){
        Age++;
    }

   
    void amIOld(){
        /* amIOld() should perform the following conditional actions: If age < 13, print You are young.. 
        If age >= 13 and <18, print You are a teenager..
        Otherwise, print You are old.. */
        if (Age > 0 && Age < 13)
        {
            cout << "You are young .." << endl;
        } else if (Age >= 13 && Age < 18)
        {
            cout << "You are a teanger.." << endl;
        } else if (Age >= 18){
            cout << "You are old.." << endl;
        }
        

    }

    // constructor
    Person(int initialAge){
        if (initialAge < 0)
        {
            Age=0;
            cout << "age is not valid" << endl;
        } else{
            Age = initialAge;
        }

        
    }

};


int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPass(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}