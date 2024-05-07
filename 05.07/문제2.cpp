#include <iostream>

using namespace std;

long long pow(int n, int m) {
    if (!n) return 0;
    if (!m) return 1;
    long long i;
    for (i = n; m-1; --m, i *= n)
        continue;
    return i;
}

bool isMultiple(int num, int n) {
    return !(num % n);
}

void printBinHex(int n) {
    long long i, j;
    cout << "0x";
    for (j = n, i = pow(16, 8); i > 0; i /= 16) {
        cout << (char)(j/i > 9 ? j/i+55 : j/i+48); // 자료형 통일 안해주면 캐스팅 무시해버림;;
        j %= i;
    }
    cout << endl;
    for (j = 1, i = pow(2, 31); i > 0; i = i >> 1, ++j) {
        cout << (n/i > 0 ? 1 : 0);
        n %= i;
        if (!(j % 4) && j > 0)
            cout << ' ';
    }
}

int main() {
    printBinHex(16); // TC 1
}
