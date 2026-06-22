#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    int x1, x2, y1, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    int d1 = pow((x1 - x2), 2);
    int d2 = pow((y1 - y2), 2);
    int d3 = d1 + d2;
    double distance = sqrt(d3);
    cout << fixed << setprecision(2) << distance;
    
    return 0;
}
