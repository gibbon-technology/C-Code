#include <stdio.h>

int bubble_sort(int, int[]);

int main(void)
{
    // This array only iterates 9 times and quits because it's already sorted
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // This array iterates 72 times because it is not sorted
    // int numbers[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    // This array iterates 24 times because half is already sorted
    // int numbers[] = {1, 2, 3, 4, 9, 8, 6, 7};

    // Get length of array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    bubble_sort(size, numbers);
}

int bubble_sort(int size, int numbers[])
{
    printf("Array size: %i\n", size);
    int iterations = 0;
    int changes;

    for (int i = 0; i < size - 1; i++)
    {
        changes = 0;
        iterations++;
        for (int j = 0; j < size - 1; j++)
        {
            iterations++;
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                changes++;
            }
        }
        if (changes == 0)
            break;
    }

    printf("Iterations: %i\n\n", iterations);
    for (int i = 0; i < size; i++)
    {
        printf("%i ", numbers[i]);
    }
}