#include <iostream>
#include <vector>

using namespace std;

vector<int> fibo(int n, int current = 2) {
    static vector<int> result = {1, 1, 2};
    static int m = n;
    
    if (current < m-1) {
        result.push_back(result[current-2] + result[current-1] + result[current]);
        return fibo(n, current+1);
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> result = fibo(10);

    for (auto &i : result)
        cout << i << ' ';
}
