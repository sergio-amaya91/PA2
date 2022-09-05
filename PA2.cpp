// PA2.cpp 
// Sergio Amaya
// 
//

#include <iostream>
#include <string>
#include <ctime>

using std::string;
using std::cin;
using std::cout;

//Coin class declaration
class Coin {
    private:
    string sideUp;

    public:
        string initialize();
        void toss();
        string getSideUp();
};

string Coin::initialize() {
    int num;
    srand(time(0));
    num = rand();



}


//Main entry point
int main()
{
    
}

