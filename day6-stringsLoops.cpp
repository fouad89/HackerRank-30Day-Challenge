#include <iostream>
#include <string>
using namespace std;

/* Task
Given a string, S , of length N that is indexed from 0 to N -1, 
print its even-indexed and odd-indexed characters as a 2
space-separated strings on a single line (see the Sample below for more detail). */

int main(){
    int T;
    string S;
    int N;
    string evenLetters, oddLetters;
    cin >> T;
    
    
    for (int i = 1; i <= T; i++ )
    {
        cin >> S;
        N = S.length();
        for (int j = 0; j < N; j++)
        {
            if (j % 2 ==0)
            {
                evenLetters+= S[j];
            } else if (j % 2 !=0)
            {
                oddLetters+= S[j];
            }
            
        }
        cout << evenLetters << "  " << oddLetters << endl;
        evenLetters = "";
        oddLetters = "";
    }
    
    

    return 0;
}