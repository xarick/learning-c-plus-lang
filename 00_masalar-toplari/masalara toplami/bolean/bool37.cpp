#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1, x2, y1, y2;
    bool m;

    cout << "x1="; cin >> x1;
    cout << "y1="; cin >> y1;
    cout << "x2="; cin >> x2;
    cout << "y2="; cin >> y2;

    m = ((x1 == x2) && (fabs(y1 - y2) == 1)) || ((y1 == y2) && (fabs(x1 - x2) == 1)) || ((fabs(x2 - x1) == 1) && (fabs(y2 - y1)));

    cout << m;

    return 0;
}
