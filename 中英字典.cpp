#include <iostream>
#include <string> 

using namespace std;

int main() {
    string name; 
    cin >> name;
    
    if (name == "dog") {
        cout << "狗";
    }
    if (name == "狗") {
        cout << "dog";
    }
    if (name == "cat") {
        cout << "貓";
    }
    if (name == "貓") {
        cout << "cat";
    }
    if (name == "duck") {
        cout << "鴨";
    }
    if (name == "鴨") {
        cout << "duck";
    }
    if (name == "cow") {
        cout << "牛";
    }
    if (name == "牛") {
        cout << "cow";
    }
    if (name == "fox") {
        cout << "狐";
    }
    if (name == "狐") {
        cout << "fox";
    }
    
    return 0;
}
