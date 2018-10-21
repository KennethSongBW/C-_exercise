#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of hours: ";
    int hour;
    cin >> hour;
    cout << "Enter the number of minutes: ";
    int minute;
    cin >> minute;
    cout << "Time: " << hour << ":" << minute << endl;
    cout << "Equals: " << hour * 60 + minute << " minutes" << endl;
    return 0;
}