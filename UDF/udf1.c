#include <stdio.h>

// 1.WAP to find cube of given no using UDF.
int cube(int num) {
    return num * num * num;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Cube of %d is %d\n", num, cube(num));

    return 0;
}

