#include <iostream>

using namespace std;

int main() {
    int second;
    cin >> second;
    
    int day = second / 86400;
    cout << day << " days\n";
    second -= day * 86400;
    
    int hour = second / 3600;
    cout << hour << " hours\n";
    second -= hour * 3600;
    
    int minute = second / 60;
    cout << minute << " minutes\n";
    second -= minute * 60;
    
    cout << second << " seconds\n";
    
    return 0;
}
