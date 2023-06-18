#include <stdio.h>

int total_sec(int hours, int min, int sec) {
    int total_sec;

    total_sec = hours * 3600 + min * 60 + sec;

    return total_sec;
}

int main() {
    int hours = 2;
    int min = 30;
    int sec = 45;

    int total_seconds = total_sec(hours, min, sec);

    
    printf("seconds: %d\n", total_seconds);

    return 0;
}
