#include<iostream>

using namespace std;

int main(){
    int cents{};
    int dollar {}, quarter{}, dime{}, nickel {}, penny{};
    cout<<"Please enter number of cents: "<<endl;
    cin>> cents;
    dollar = cents/100;
    cents -= 100*dollar;

    quarter = cents/25;
    cents -= 25*quarter;

    dime = cents/10;
    cents -= 10*dime;

    nickel = cents/5;
    cents -= 5*nickel;

    penny = cents;

    cout<<"Dollars :" << dollar << endl;
    cout<<"Quaretrs :" << quarter << endl;
    cout<<"Dime :" << dime << endl;
    cout<<"Nickel :" << nickel << endl;
    cout<<"Penny :" << penny << endl;

    return 0;
}