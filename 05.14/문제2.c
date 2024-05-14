#include <stdio.h>
#include <unistd.h>     //Sleep( ) 함수 사용을 위한 헤더 파일
#include <stdlib.h>      // system( ) 함수 사용을 위한 헤더 파일
#include <time.h>

int main(void) {
    time_t rawtime;
    struct tm* timeinfo;

    while (1) {
        time(&rawtime);
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        printf("현재 시간: %02d시 %02d분 %02d초\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
        sleep(1);
        system("clear");
    }
}
