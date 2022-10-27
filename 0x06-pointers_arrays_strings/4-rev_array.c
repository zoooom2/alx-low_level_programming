#include "main.h"

/**
 * @brief a function that reverses the content of an array of integers.
 *
 * @param a the array of integers
 * @param n the length of the array to reverse
 */

void reverse_array(int *a, int n)
{
    int index = 0, i;

    for (i = n - 1; i >= 0; i--)
    {
        *(temp + i) = a[i];
    }

    for (index = 0; index < n; index++)
    {
        a[index] = temp[index];
    }
}