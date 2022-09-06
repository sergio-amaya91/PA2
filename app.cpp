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
void Coin::toss(Coin tobetossed, int num) {
    for (int i = 0; i < num; i++) {
        tobetossed.initialize();
        cout <<"Toss "<< i+1<<": " << tobetossed.getSideUp() << endl;
    }

    

}


string Coin::getSideUp() {
    return sideUp;
}

//Main entry point
int main()
{
    srand(time(0));
    int num;
    Coin quarter;
    quarter.initialize();
    cout << "Welcome to Coin Toss!" << endl;

    cout << quarter.getSideUp() << endl;
    cout << "How many coin tosses?" << endl;
    cin >> num;
    quarter.toss(quarter, num);

   
}

