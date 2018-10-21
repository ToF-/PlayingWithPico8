#include <stdio.h>
#include <stdlib.h>

void putcountchar(int count,char c) {
    if (count>1) {
        if (count < 10) {
            putchar('0'+count);
        } else {
            putchar('A'+count-10);
        }
    }
    putchar(c);
}

int main(int argc, char *argv[]) {
    char current = getchar();
    char c;
    int  count = 1;
    while((c = getchar())!= EOF) {
        if (c == ';') {
            putchar('\n');
            putchar(c);
            while ((c = getchar())!= '\n');
        }
        else {
            if (c == current) {
                count++;
            }
            else {
                putcountchar(count,current);
                count = 1;
                current = c;
            }
        }
    }
    return 0;
}
