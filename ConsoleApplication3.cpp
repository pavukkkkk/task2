#include <iostream>
using namespace std;

int main()
{

    double pi, a, s, b;

    pi = acos(-1);
    cin >> a >> b;
    s = cos(b / pi * 180);
    cout << a * a * cos((45. / 180) * pi) * sin((45. / 180) * pi) / 2;
}
