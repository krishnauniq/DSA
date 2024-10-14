#include <stdio.h>

void printSpaces(int spaces) {
    for (int i = 0; i < spaces; ++i) {
        printf(" ");
    }
}

void printStars(int stars) {
    for (int i = 0; i < stars; ++i) {
        printf("* ");
    }
}

void printDiamond(int n) {
    int i, j, space = 1;

    space = n - 1;

    for (j = 1; j <= n; j++) {
        printSpaces(space);
        printStars(2*j - 1);
        printf("\n");
        space--;
    }

    space = 1;

    for (j = 1; j <= n - 1; j++) {
        printSpaces(space);
        printStars(2*(n - j) - 1);
        printf("\n");
        space++;
    }
}

int main() {
    int n;

    printf("Enter the number of rows for the diamond pattern: ");
    scanf("%d", &n);

    printDiamond(n);

    return 0;
}