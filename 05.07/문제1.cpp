#include <iostream>

using namespace std;

bool isMultiple(int num, int n) {
    return !(num % n);
}

int main() {
  cout << isMultiple(98, 2) // TC 1
  cout << endl << isMultiple(34, 3) // TC 2
}
