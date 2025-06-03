#include <iostream>
using namespace std;

// fibonacci recursion function:
int fibonacci(int n) {
    if (n==0 || n==1){
        return 1; // base case
    } else {
        return fibonacci(n-2) + fibonacci(n-1); // recursive step
    }
}

int main() {
    // calling the recursive fibonacci function
    int call = 4;
    int answer;
    answer = fibonacci(call);
    cout << answer << endl;
    
    return 0;
}