//programming assignment 2
// Sergio Amaya
//coin class

#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cout;
using std::endl;
using std::vector;
//Coin class declaration
class Coin {

private:

    string sideUp;

public:
    string initialize();
    void toss(Coin, int);
    string getSideUp();
};

//initializing function to get side up
string Coin::initialize() {

    int num;

    num = rand();
    if ((num % 2) == 0) {
        sideUp = "Heads";
    }
    else {
        sideUp = "Tails";
    }
    return sideUp;
}

//toss function that flips the coin x amount of times
void Coin::toss(Coin toBeTossed, int num) {
    //vectors to keep track of results
    vector<string> vTails;
    vector<string> vHeads;

    //for loop that tosses coin x amount of times and displays results
    for (int i = 0; i < num; i++) {
        toBeTossed.initialize();
        cout << "Toss " << i + 1 << ": " << toBeTossed.getSideUp() << endl;
        if (toBeTossed.getSideUp() == "Heads") {
            vHeads.push_back(toBeTossed.getSideUp());
        }
        else {
            vTails.push_back(toBeTossed.getSideUp());
        }
    }
    //display results of heads and tails
    cout << "Number of heads tossed: " << vHeads.size() << endl;
    cout << "Number of tails tossed: " << vTails.size() << endl;


}

//returns the side that is up
string Coin::getSideUp() {
    return sideUp;
}