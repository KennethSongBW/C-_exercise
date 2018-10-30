#include "header.h"

namespace basketball
{

void sportsMan::addAssist(int a)
{
    assist += a;
}

void sportsMan::addRebound(int r)
{
    rebound += r;
}

void sportsMan::addScore(int point)
{
    score += point;
}

sportsMan::sportsMan(int n, double h, double w, int p)
{
    score = assist = rebound = 0;
    number = n;
    height = h;
    weight = w;
    pos = position(p);
}

sportsMan::~sportsMan()
{
    std::cout << "Destory!" << std::endl;
}

}