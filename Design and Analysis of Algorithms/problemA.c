#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int hour, min;
        char c;
        scanf("%d:%d", &hour, &min);
        if (hour < 12)
            c = 'A';
        else
            c = 'P';
        if (hour == 0)
            hour = 12;
        else if (hour > 12)
            hour -= 12;
        printf("%02d:%02d %cM\n", hour, min, c);
    }
    return 0;
}
