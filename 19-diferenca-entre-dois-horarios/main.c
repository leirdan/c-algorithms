#include <stdio.h>

int main() {
        int h1, h2, m1, m2, hour, min;
        int start, end, total;

        scanf("%d %d %d %d", &h1, &h2, &m1, &m2);

        start = (h1 * 60) + m1;
        end = (h2 * 60) + m2;

        if (start > end) {
                total = (60 * 24) - start + end;
        }
        else {
                total = end - start;
        }

        hour = total / 60;
        min = total % 60;

        printf("%dh%dmin\n", hour, min);

        return 0;
}
