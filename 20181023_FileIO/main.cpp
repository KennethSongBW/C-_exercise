#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    const int size = 60;
    ifstream fin;
    fin.open("status.txt");
    if (!fin.is_open())
    {
        cout << "Error Opening File" << endl;
        exit(EXIT_FAILURE);
    }
    int value = 0, sum = 0, count = 0;
    // Error Warning!
    // do
    // {
    //     fin >> value;
    //     sum += value;
    //     count++;
    //     cout << value << endl;
    // }
    // while (fin.good());

    // OK!
    // fin >> value;
    // while (fin.good())
    // {
    //     ++count;
    //     sum += value;
    //     fin >> value;
    // }

    //Best!
    while (fin >> value)
    {
        count++;
        sum += value;
    }
    
    if (fin.eof()) cout << "Finished" << endl;
    else  cout << "Terimated" << endl;
    if (count > 0) cout << sum << " " << count << endl;
    else cout << "0!" << endl;
    fin.close();

    return 0;
}
