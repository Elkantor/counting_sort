#include <stdio.h>
#include "counting_sort.c"

int main()
{
    #define max_value 14
    int array[] = {12, 14, 0, 2, 8, 9, 3, 5, 1, 13, 7, 6, 4, 10 };
    #define array_size (sizeof(array) / sizeof(array[0]))

    printf("original array: \n");
    for (int i = 0; i < array_size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    int array_indexes[array_size] = {0};

    // really important to have max_value + 1 and fill elements with 0 or everything would be messed up (potential seg fault)
    int counting_sort_buffer[max_value+1] = {0};

    counting_sort_index(array, array_indexes, array_size, counting_sort_buffer, max_value);

    printf("sorted indexes: \n");
    for (int i = 0; i < array_size; ++i)
    {
        printf("%d ", array_indexes[i]);
    }

    printf("\n\n");

    printf("sorted array: \n");
    for (int i = 0; i < array_size; ++i)
    {
        int current_idx = array_indexes[i];
        printf("%d ", array[current_idx]);
    }
    
    printf("\n");
    return 0;
}