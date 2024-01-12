#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    char *name;

    printf("Enter the total number of characters in your full name: ");
    scanf("%d", &N);

    // Allocate memory for dynamic array of characters
    name = (char *) malloc((N + 1) * sizeof(char));

    printf("Enter your full name: ");
    getchar(); // Consume newline character left by scanf
    for (i = 0; i < N; i++) {
        scanf("%c", &name[i]);
    }
    name[N] = '\0'; // Add terminating null character

    printf("Dynamic Array: \"%s\"\n", name);

    // Free dynamically allocated memory
    free(name);

    return 0;
}

