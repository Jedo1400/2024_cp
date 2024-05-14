#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (short i = 2; true; i = i % 9 + 1) {
        cout << "------------------------" << endl;
        for (short j = 1; j <= 9; ++j)
            cout << i << " * " << j << " = " << i * j << endl;
        sleep(i == 9 ? 0 : 1);
    }
}
