#include <iostream>
#include <map>
using namespace std;

/* 

Given n names and phone numbers, assemble a phone book that maps friends' names to their respective
phone numbers. You will then be given an unknown number of names to query your phone book for. 
For each name queried, print the associated entry from your phone book on a new line in the
form name=phoneNumber; if an entry for name is not found, print Not found instead.

Note: Your phone book should be a Dictionary/Map/HashMap data structure.

 */

int main(){
    int n, queries;

    map<string, long> phoneBook;
    cout << "how many in the phone book" << endl;
    cin >> n;
    for (int i =0; i < n; i++){
        string name;
        long number;
        cout << "Enter Name Numer" << endl;
        cin >> name >> number;
        phoneBook.insert(make_pair(name,number));
    }
    cout << "How many queries? " << endl;
    cin >> queries;
    for (int i=0; i < queries; i++){
        string name;
        cout << "Enter a name to query: " <<endl;
        cin >> name;
        map<string, long>::iterator itr;
        itr = phoneBook.find(name);
        if (itr == phoneBook.end())
        {
            cout << "Not found" << endl;
        } else{
            cout << name << "=" << phoneBook[name] << endl;
        }
        
    }


    return 0;
}