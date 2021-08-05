#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

/* You are given two classes, Person and Student, 
where Person is the base class and Student is the derived class. 
Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following: 


A Student class constructor, which has 4 parameters:
A string, firstName .
A string, lastName.
An integer, idNumber.
An integer array (or vector) of test scores, scores.
A char calculate() method that calculates a Student object's average and returns the grade character representative of their calculated average:

Grading Scale
O : >=90
E : 80-89
A : 70- 79
P : 55 - 69
D : 40 - 54
T : < 40

*/


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student: public Person{
private:
    vector <int> testScores;
public:
    // constructor
    Student(string firstName, string lastName, int id, vector<int> scores)
    :Person(firstName, lastName, id){
        testScores = scores;
    }

/*     Grading Scale
O : >=90
E : 80-89
A : 70- 79
P : 55 - 69
D : 40 - 54
T : < 40 */
    string calculate(){
        string letterGrade;
        float average = accumulate(testScores.begin(), testScores.end(), 0.0)/testScores.size();
        if(average >= 90 && average <=100){
            letterGrade = "O";
        } else if ((average >= 80) && (average <= 89))
        {
            letterGrade = "E";
        } else if ((average >= 70) && (average <= 79))
        {
            letterGrade = "A";
        } else if ((average >= 55) && (average <= 69))
        {
            letterGrade = "P";
        } else if ((average >= 40) && (average <= 54))
        {
            letterGrade = "D";
        } else if ((average <= 40) )
        {
            letterGrade = "T";
        }

        return letterGrade;

}



};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}