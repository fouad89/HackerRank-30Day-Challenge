#include <iostream>
#include <cmath>
#include <exception>
using namespace std;

/* 
Write a Calculator class with a single method: int power(int,int). 
The power method takes two integers, p and n, as parameters and returns the integer result of n^p.
If either n or p is negative, then the method must throw an exception with the message: 
n and p should be non-negative.
 */

class Calculator
{
private:
    int n, p;
public: 
    // power method
    int power(int n, int p)
    {
        if (n < 0 || p <0)
        {
            throw invalid_argument("n and p should be non-negative");
        }
        
        
        return pow(n, p);
    }

    // Constructor
    Calculator(int base, int power)
    {
        n = base;
        p = power;
    }

};

int main()
{
    int T,n,p;
    Calculator myCalculator=Calculator(n, p);
    
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
