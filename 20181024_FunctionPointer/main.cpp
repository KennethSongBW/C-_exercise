#include <iostream>
using namespace std;

double add(double x, double y)
{
    return x + y;
}
double calculate(double x, double y, double (*p)(double, double))
{
    return p(x,y);
}

int main()
{
    double x = add(0.5, 2.5);
    double (*p) (double, double);
    p = add;
    double y = calculate(0.5, 2.5, p);
    cout << x << " " << y << endl;
    return 0;
}