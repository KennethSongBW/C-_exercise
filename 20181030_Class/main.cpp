#include <iostream>
#include "header.cpp"

using namespace std;

int main()
{
    cout << "Start!" << endl;
    basketball::sportsMan Iverson(3, 1.82, 75.0, 2);
    Iverson.addAssist(10000);
    Iverson.addRebound(8000);
    Iverson.addScore(20000);
    cout << Iverson.getHeight() << " " << Iverson.getWeight() << endl;
    return 0;
}