//Suraj Subramnian
//C++ program to find remainder of a number without using '%','*' and '/' operators

#include <iostream>
using namespace std;

int modulo(int, int);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << modulo(a, b) << endl;
    return 0;
}

int modulo(int x, int y)
{
    if (x >= 0 && y > 0)
    {
        int m;

        if (x < y)
            return x;

        m = modulo(x, y + y);

        if (m >= y)
            m -= y;

        return m;
    }
}