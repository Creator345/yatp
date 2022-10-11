#include <iostream>

int petya, petya_plus, taxi, taxi_plus;

using namespace std;

void arrangement(){
    while (petya <= taxi) {
        petya += petya_plus;

        if (petya > taxi) 
            petya = taxi;

        taxi -= taxi_plus;
    }
}

int main() {
    cin >> petya >> petya_plus >> taxi >> taxi_plus;
    arrangement();
    cout << petya << endl;
    return 0;
}
