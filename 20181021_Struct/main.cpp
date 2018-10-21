#include <iostream>
using namespace std;

enum city{Shanghai, Beijing, HongKong};

union number
{
    int number;
    double num;
};

struct student
{
    city cityname;
    string school;
    number studentNumber;
};

int main()
{
    student song = {Shanghai,"SJTU",26};
    cout << song.school;
    return 0;
}