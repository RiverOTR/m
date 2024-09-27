#include <stdio.h>
#define MAX_CHAR 50

int main() {
    int line_count, i;
    while (1) {
        for (line_count = 0; line_count < MAX_CHAR; line_count++) {
            for (i = 0; i < line_count; i++) {
                printf("=");
            }
            printf("\n");
        }
        for (line_count = MAX_CHAR; line_count > 0; line_count--) {
            for (i = 0; i < line_count; i++) {
                printf("=");
            }
            printf("\n");
        }
    }
    return 1;
}
