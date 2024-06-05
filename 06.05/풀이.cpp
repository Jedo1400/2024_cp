#include <cstdio>

int main() {
    char words[3][20] = { "Time is gold", "No pain no gain", "No sweat no sweet"};
    
    short a_cnt = 0;
    for (short i = 0; i < 3; ++i)
        for (short j = 0; j < 20; ++j)
            if (words[i][j] == 'a')
                ++a_cnt;

    printf("%d", a_cnt);
}
