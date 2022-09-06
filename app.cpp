// PA2.cpp 
// Sergio Amaya
//App Description 
//Coin toss app that creates a coin, asks the user how many times they would like to toss it and displays the results of each toss and overall amount of heads and tails tossed

#include <iostream>
#include <time.h>
#include "Coin.h"

using std::cin;
using std::cout;
using std::endl;


//Main entry point
int main()
{   //variables and random seed generation
    srand(time(0));
    int num;
    Coin quarter;

    //coin creation
    quarter.initialize();

    //output
    cout << "Welcome to Coin Toss!" << endl << endl;

    cout << "Initial side up: " << quarter.getSideUp() << endl;
    cout << "How many coin tosses?" << endl;
    cin >> num;
    //start coin toss using the coin used and number of times to be tossed
    quarter.toss(quarter, num);


}

