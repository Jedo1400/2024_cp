#include <iostream>

using namespace std;

void printFactor(int n) {
    if (n < 1) return;
    cout << 1 << ' ';
    for (int i = 2; i <= n; ++i)
        if (!(n % i))
            cout << i << ' ';
}

int main() {
    printFactor(100); // TC 1
    cout << endl;
    printFactor(0); // TC 2
}
