#include <iostream>
using namespace std;

template <class T>
T getSquare(T a)
{
    return a * a;
}

template <class T>
T getMax(T *a, int n)
{
    T max = a[0];

    // cout << a[0] << endl;
    // return a[0];

    // for (int i =0; i < n; i++)
    // {
    //     if (a[i] > max) max = a[i];
    // }

    // cout << sizeof(a) << " " << sizeof(int) << endl;

    // for (int i = 0; i < sizeof(a)/sizeof(int); i++)
    // {
    //     if (a[i] > max) max = a[i];
    // }

    while (*a)
    {
        if (*a > max) max = *a;
        a = a + 1;
    }
    
    return max;
}

int main()
{
    int a = getSquare<int> (2);
    cout << a << endl;
    double b = getSquare(1.2);
    cout << b << endl;
    int c[3] = {1,2,3};
    int d = getMax(c, 3);
    cout << d << endl;
    return 0;
}