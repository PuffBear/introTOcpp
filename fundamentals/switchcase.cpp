// working with switch cases
#include <iostream>
using namespace std;

int main() {
    int x = 2;

    switch(x) {
        case 1:
            cout << "x is 1\n";
            break;
        case 2:
        case 3:
            cout << "x is 2 or 3";
        default:
            cout << "x is not 1, 2, or 3";
    }

    return 0;
}