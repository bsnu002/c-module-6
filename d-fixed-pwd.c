#include<stdio.h>

int main() {
    int x;
    // end of file
    while (scanf("%d", &x) != EOF){
        if (x == 1999){
            printf("Correct\n");
            break;
        }
        else {
            printf("Wrong\n");
        }
    }
    
    return 0;
}