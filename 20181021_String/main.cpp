#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "song";
    string s2;
    cin >> s2;
    string s3 = s1 + s2;
    cout << s3 << endl;
    s1 += s2;
    cout << s1 << endl;
    return 0;
}