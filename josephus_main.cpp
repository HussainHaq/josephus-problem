/* 
 	Husain Haq
 	z119897
 	CSCI 330 PE1
 	I certify that this is my own work and where appropriate an extension
 	of the starter code provided for the assignment.
 */
#include "josephus.h"
#include "josephus.cpp" 
#include <iostream>

using namespace std;
int main()
{
    //define a list container 
    list<string> peopleList;
    args joseph;
    //this will count how many times the a person has been eliminted
    unsigned counter = 1; 
    joseph.N = 41;
    joseph.M = 3;
    joseph.K = 7;
   
    cout << "Number of people? " << joseph.N << endl; 
    cout << "Index for elimination? " << joseph.M << endl;
    cout << "Index for printing? " << joseph.K << endl;

    // This will initalize the args variable to hold the struct values
    init_vals(peopleList, joseph);

    //print out the list
    print_list(peopleList, counter);

    joseph.M -= 1;

    auto it = joseph.M % peopleList.size();

    while (peopleList.size() > 1)
    {
        auto iter = peopleList.begin();
        advance(iter, it);
        peopleList.erase(iter);

        it += joseph.M;
        it %= peopleList.size();

        if ((counter % joseph.K == 0 && counter != 0) || peopleList.size() == 1)
            print_list(peopleList, counter);
       
        counter++;
    }
    return 0;
} 
