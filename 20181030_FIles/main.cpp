#include <iostream>
#include "header.cpp"

int main()
{
    using namespace std;
    cout << 1 << endl;
    int x = songMath1::add(1,2);
    int y = songMath1::minus(2,1);
    cout << x << " " << y << " " << songMath1::getZero() << endl;
    x = songMath2::muliply(2,3);
    y = songMath2::devide(8,2);
    cout << x << " " << y << " " << songMath2::getZero() << endl;
    return 0;
}