#include <iostream>
#include <vector>

using namespace std;

vector<int> fibo(int n, int current = 1) {
    static vector<int> result = {1, 1};
    static int m = n;
    
    if (current < m-1) {
        result.push_back(result[current-1] + result[current]);
        return fibo(n, current+1);
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> result = fibo(n);

    for (int i = 1; i <= n; ++i)
        cout << i << '\t';
    cout << endl;
    for (auto &i : result)
        cout << i << '\t';
}
