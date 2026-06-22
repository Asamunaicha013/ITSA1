#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int hour, salary;
    cin >> hour >> salary;
    
    double tot = 0;
    
    if(hour <= 60) {
        tot = hour * salary;
        cout << fixed << setprecision(1) << tot;
    }
    else if(hour > 60 && hour <= 120) {
        tot = 60 * salary + (hour - 60) * salary * 1.33;
        cout << fixed << setprecision(1) << tot;
    }
    else {
        tot = 60 * salary + 60 * salary * 1.33 + (hour - 120) * salary * 1.66;
        cout << fixed << setprecision(1) << tot;
    }
    
    return 0;
}
