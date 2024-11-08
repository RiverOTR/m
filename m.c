#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#ifndef COLORS_H
#define COLORS_H

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#endif

#define PERIOD_MULT 16
#define MAX_LINE_LEN 40
#define SLEEP_SEC 0
#define SLEEP_NSEC 10000000
#define WAVE_COLOR ANSI_COLOR_YELLOW

int main()
{
    int line_len;
    float x;
    char line[MAX_LINE_LEN];
    struct timespec t;

    t.tv_sec = SLEEP_SEC;
    t.tv_nsec = SLEEP_NSEC;
    x = 0;

    while (1)
    {
        line_len = (int)((-fabs(sinf((x)/PERIOD_MULT))+1)*39);
        memset((void*)line, '=', line_len);
        line[line_len] = '\0';
        printf(WAVE_COLOR "%s\n", line);
        nanosleep(&t, NULL);
        x++;
    }
    return 1;
}
