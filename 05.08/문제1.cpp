#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    for (short i = 0; i < 3; ++i) {
        for (short j = 0; j < 6; ++j) 
            cout << rand() % 45 + 1 << ' ';
        cout << endl;
    }
}
