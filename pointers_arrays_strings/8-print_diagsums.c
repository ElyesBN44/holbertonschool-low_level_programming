#include <stdio.h>

void print_diagsums(int *a, int size)
{
    int primary_diag_sum = 0;
    int secondary_diag_sum = 0;

    for (int i = 0; i < size; i++) {
        primary_diag_sum += *(a + i * size + i);
        secondary_diag_sum += *(a + i * size + (size - 1 - i));
    }
    printf("%d, %d\n", primary_diag_sum, secondary_diag_sum);
}
