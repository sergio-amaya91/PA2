// PA2.cpp 
// Sergio Amaya
// 
//

#include <iostream>
#include <string>
#include <time.h>

using std::string;
using std::cin;
using std::cout;
using std::endl;

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
void Coin::toss(Coin tobetossed, int num) {
    for (int i = 0; i < num; i++) {
        tobetossed.initialize();
        cout <<"Toss "<< i+1<<": " << tobetossed.getSideUp() << endl;
    }

    

}

//returns the side that is up
string Coin::getSideUp() {
    return sideUp;
}

//Main entry point
int main()
{   //variables and random seed generation
    srand(time(0));
    int num;
    Coin quarter;

    //coin creation
    quarter.initialize();
    
    //output
    cout << "Welcome to Coin Toss!" << endl<<endl;
    
    cout<<"Initial side up: " << quarter.getSideUp() << endl;
    cout << "How many coin tosses?" << endl;
    cin >> num;
    //start coin toss using the coin used and number of times to be tossed
    quarter.toss(quarter, num);

   
}

