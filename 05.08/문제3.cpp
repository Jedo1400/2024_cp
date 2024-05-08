#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    srand((unsigned)time(NULL));
    short answer;
    cout << "가위 = 0, 바위 = 1, 보 = 2" << endl;
    cin >> answer;
    const short result = rand() % 3;
    if (answer == result)
        cout << "비겼습니다";
    else if (answer + result != 2)
        cout << (answer > result ? "이겼습니다" : "졌습니다");
    else
        cout << (answer < result ? "이겼습니다" : "졌습니다");
    cout << endl << "내가 낸 패 : " << answer << ", 컴퓨터가 낸 패 : " << result;
}
