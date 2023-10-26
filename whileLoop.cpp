#include <stdio.h>

int main() {
    int num, d, re;

    num = 71;
    while(num > 0) 
    {
        re = num % 5;
        printf("%d %d\n", num, re);
        num = num / 5;
    }
    printf("%d %d\n", num, re);
}