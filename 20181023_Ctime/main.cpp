#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    float sec = 20.59;
    clock_t delay = sec* CLOCKS_PER_SEC;
    clock_t start = clock();
    while (clock()-start < delay);
    cout << "done" << endl;
    return 0;
}