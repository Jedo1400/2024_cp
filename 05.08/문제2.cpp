#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    const short result = rand() % 6 + 1;
    short answer = 0;
    while (answer != result) {
        cin >> answer;
        cout << (answer == result ? "정답입니다" : "오답입니다") << endl;
    }
}
