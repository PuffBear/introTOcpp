// understanding simple else if statements
#include <iostream>
using namespace std;

int main() {
    int x; // initialising x
    int y; // initialising y
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;

    if(x>y)
        cout << "x is greater than y";
    else if(y>x)
        cout << "y is greater than x";
    else
        cout << "x and y are equivalent";

    return 0;
}