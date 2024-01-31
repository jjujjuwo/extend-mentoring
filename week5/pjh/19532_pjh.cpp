#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c, d, x, y, rx, ry;
    cin >> a >> b >> x >> c >> d >> y;
    rx = (d * x - b * y) / (a * d - b * c);
    ry = (-c * x + a * y) / (a * d - b * c);
    cout << rx << " " << ry;
}
