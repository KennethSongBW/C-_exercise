#include "quaternion.h"

namespace Angle
{

quaternion::quaternion(double a, double b, double c, double d):w(a),x(b),y(c),z(d)
{
}

quaternion::quaternion():w(0),x(0),y(0),z(0)
{
}

quaternion::~quaternion()
{
    std::cout << "Destory!" << std::endl;
}

double quaternion::getNorm()
{
    return sqrt(w * w + x * x + y * y + z * z);
}

quaternion quaternion::operator+(quaternion &another)
{
    quaternion ans(0,0,0,0);
    ans.setW(w + another.getW());
    ans.setX(x + another.getX());
    ans.setY(y + another.getY());
    ans.setZ(z + another.getZ());
    return ans;
}

void quaternion::normlize()
{
    double n = getNorm();
    w /= n;
    x /= n;
    y /= n;
    z /= n;
}

std::ostream & operator<< (std::ostream & os, const quaternion &q)
{
    std::cout << q.w;
}

}