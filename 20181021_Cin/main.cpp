#include <iostream>
using namespace std;

int main()
{
    const int maxSize = 30;
    cout << "Your name: " << endl;
    char name[maxSize];
    cin.getline(name,maxSize);
    int age;
    cout << "age: " << endl;
    cin >> age;
    cin.get();
    char school[maxSize];
    char city[maxSize];
    cout << "Your School and city: " << endl;
    cin.getline(school,maxSize).getline(city,maxSize);
    cout << name << " is studing in " << school << " in " << city << endl;
    return 0;
}