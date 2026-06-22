#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int n1 = n / 1000;
    cout << n1 << "\n";
    n = n - n1 * 1000;
    
    int n2 = n / 100;
    cout << n2 << "\n";
    n = n - n2 * 100;
    
    int n3 = n / 10;
    cout << n3 << "\n";
    n = n - n3 * 10;
    
    cout << n;
    
    return 0;
}
