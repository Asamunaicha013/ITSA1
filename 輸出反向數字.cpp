#include <iostream>

using namespace std;

int main() {
    int str;
    cin >> str;
    
    cout << str % 10 << "," 
         << (str / 10) % 10 << "," 
         << (str / 100) % 10 << "," 
         << str / 1000 << "\n";
         
    return 0;
}
