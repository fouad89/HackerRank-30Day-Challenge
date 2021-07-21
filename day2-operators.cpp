#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;
/* Objective
In this challenge, you will work with arithmetic operators. 

Task
Given the meal price (base cost of a meal), 
tip percent (the percentage of the meal price being added as tip), and tax percent 
(the percentage of the meal price being added as tax) for a meal,
 find and print the meal's total cost. Round the result to the nearest integer.
  */

 void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tax = meal_cost * (tax_percent/float(100));
    double tip = meal_cost*(tip_percent/float(100));
    double total = meal_cost + tip +tax;
    cout << round(total) << endl;

}

int main(){
    double meal_cost;
    int tip_percent, tax_percent;
    cout << "What is the meal cost? " << endl;
    cin >> meal_cost;
    cout << "Tip: " << endl;
    cin >> tip_percent;
    cout << "Tax: "<< endl;
    cin >> tax_percent;

    solve(meal_cost, tip_percent, tax_percent);


    return 0;
}