#include <iostream>

using namespace std;

long long prefix_sum(int min, int max, int weight) {
    static long long result = 0;
    if (min > max) return result;
    else {
        result += min;
        return prefix_sum(min + weight, max, weight);
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int min, max, weight;
    cout << "어디부터 구할까요 : ";
    cin >> min;
    cout << "어디까지 구할까요 : ";
    cin >> max;
    cout << "어떤 간격으로 더할까요 : ";
    cin >> weight;
    cout << min << "부터 " << max << "까지 " << weight << " 증가 누적 합계 : " << prefix_sum(min, max, weight);
}
