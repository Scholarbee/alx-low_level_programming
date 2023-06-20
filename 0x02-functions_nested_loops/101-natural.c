#include <stdio.h>
/**
 * main - The sum of multiples of 3 or 5,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void) {
    int limit = 1024;
    int sum = 0;

    for (int i = 1; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
