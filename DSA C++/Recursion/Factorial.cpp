#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1); // Corrected: Single recursive call
}

int main() {
    int n;
    cin >> n;

    int fact = factorial(n);
    cout << fact;
    return 0;
}
