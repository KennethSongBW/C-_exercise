#ifndef HEADER_H
#define HEADER_H

namespace songMath1
{
    template <class T>
    T add(T a, T b)
    {
        return a + b;
    }

    template <class T>
    T minus(T a, T b)
    {
        return a - b;
    }

    int getZero();
}

namespace songMath2
{
    template <class T>
    T devide(T a, T b)
    {
        return a / b;
    }

    template <class T>
    T muliply(T a, T b)
    {
        return a * b;
    }

    int getZero();
}

#endif