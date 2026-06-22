#include <iostream>

using namespace std;

int main() {
    int ticket;
    cin >> ticket;
    
    cout << "NT10=" << ticket / 10 << "\n";
    ticket = ticket - 10 * (ticket / 10);
    
    cout << "NT5=" << ticket / 5 << "\n";
    ticket = ticket - 5 * (ticket / 5);
    
    cout << "NT1=" << ticket << "\n";
    
    return 0;
}
