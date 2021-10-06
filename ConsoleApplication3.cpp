#include <iostream>
using namespace std;

int main()
{

    double x, y, x0, y0, r,s;
    cin >> x >> y >> x0 >> y0 >> r;
    s=sqrt(pow(x - x0, 2) + pow(y - y0, 2)) - r;
    if (s > 0) {
        cout << s;
    }
    else {
        cout << 0;
    }
}
