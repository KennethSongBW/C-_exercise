#include <iostream>

namespace basketball
{
    enum position {PG = 1, SG = 2, SF = 3, PF = 4, C = 5};
    
class sportsMan
{
private:
    int score;
    int rebound;
    int assist;
    int number;
    double height;
    double weight;
    position pos;

public:
    sportsMan(int n, double h, double w, int p);
    ~sportsMan();
    void addScore(int point);
    void addAssist(int a);
    void addRebound(int r);
    int getScore() {return score;}
    int getRebound() {return rebound;}
    int getAssist() {return assist;}
    void setNum(int a) {number = a;}
    int getNum() {return number;}
    void setHeight(double a) {height = a;}
    double getHeight() {return height;}
    void setWeight(double a) {weight = a;}
    double getWeight() {return weight;}
    void setPos(int a);
    position getPos() {return pos;}
};

}