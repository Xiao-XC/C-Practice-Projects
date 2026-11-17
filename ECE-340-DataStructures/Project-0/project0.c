#include <stdio.h>

#define MAX_SIZE 50

int main(void)
{
    int values[MAX_SIZE];
    int count;
    int i;

    printf("Enter the number of integer values to be read in: ");
    scanf("%d", &count);

    while (count > MAX_SIZE)
    {
        printf("\nThe number specified exceeds the maximum allowable value.\n");
        printf("Please enter another number: ");
        scanf(" %d", &count);
        printf("\n");
    }

    for (i = 0; i < count; i++)
    {
        printf("Enter an integer value: ");
        scanf(" %d", &values[i]);
    }

    printf("\nThe values stored in the array are:");
    
    for (i = 0; i < count; i++)
    {
        if (values[i] % 3 == 0 && values[i] % 4 == 0)
        {
            printf(" %d\tdivisible by 3 and by 4\n", values[i]);
        }
        else if (values[i] % 3 == 0)
        {
            printf(" %d\tdivisible by 3\n", values[i]);
        }
        else if (values[i] % 4 == 0)
        {
            printf(" %d\tdivisible by 4\n", values[i]);
        }
        else
        {
            printf(" %d\tnone\n", values[i]);
        }
    }

    printf("\nDone.");

    return 0;
}
