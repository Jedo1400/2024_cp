#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    for (short i = 0; i < 10; ++i) {
        bool sex = rand() % 2;
        short height = rand() % 220 + 1, weight = rand() % 120 + 1;
    
        cout << (sex ? "남자" : "여자") << '-' << height << '-' << weight << endl;
    }
}
