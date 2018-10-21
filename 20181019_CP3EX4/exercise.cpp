#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int Minute = 60;
    const int Hour = Minute * 60;
    const int Day = Hour * 24;
    long sec;
    cout << "Enter the number of seconds: ";
    cin >> sec;
    int days = sec / Day;
    int hours = (sec % Day) / Hour;
    int minutes = ((sec % Day) % Hour) / Minute;
    int seconds = ((sec % Day) % Hour) % Minute;
    cout << "\n" << sec << "seconds = " << days << " days " << hours << " hours " << minutes << " minutes " << seconds << "seconds\n";
    return 0;
}