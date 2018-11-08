#ifndef QUATERNION_H_
#define QUATERNION_H_

#include <iostream>
#include <cmath>
namespace Angle
{
class quaternion
{
private:
    double w, x, y, z;

public:
    quaternion(double a, double b, double c, double d);
    quaternion();
    ~quaternion();
    //double toAngle();
    quaternion operator+(quaternion &another);
    friend std::ostream & operator<< (std::ostream & os, const quaternion & q);
    //quaternion operator*(quaternion &another);
    double getNorm();
    void normlize();
    double getW() {return w;}
    double getX() {return x;}
    double getY() {return y;}
    double getZ() {return z;}
    void setW(double a) {w = a;}
    void setX(double a) {x = a;}
    void setY(double a) {y = a;}
    void setZ(double a) {z = a;}
};

}
#endif