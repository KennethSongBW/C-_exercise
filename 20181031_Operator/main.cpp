#include "quaternion.cpp"
#include <iostream>
using namespace std;

int main()
{
    cout << "Start!" << endl;
    Angle::quaternion q1(1,0,0,0);
    Angle::quaternion q2(0.5,0.5,0.5,0.5);
    Angle::quaternion q3 = q1 + q2;
    q3.normlize();
    cout << q3.getW() << " " << q3.getX() << " " << q3.getY() << " " << q3.getZ() << endl;
    cout << q3 << endl;
    return 0;
}