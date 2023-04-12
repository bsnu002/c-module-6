#include<stdio.h>

int main() {
    int i = 10;

    // int x = i++; // post increment
    int x = ++i;    // pre increment

    printf("x- %d, i- %d", x, i);

    return 0;
}