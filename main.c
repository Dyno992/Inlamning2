#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CURRENCIES 100
#define MAX_LINE_LENGTH 10000

typedef struct {
    char *name;
    int value;
} Currency;

int main() {
    FILE *file = fopen("currencies.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        exit(1);
    }

    char *buffer = (char *)malloc(MAX_LINE_LENGTH * sizeof(char));
    if (buffer == NULL) {
        printf("Could not allocate memory.\n");
        exit(1);
    }

    Currency currencies[MAX_CURRENCIES];
    int num_currencies = 0;

    while (fgets(buffer, MAX_LINE_LENGTH, file) != NULL && num_currencies < MAX_CURRENCIES) {
        char *name = strtok(buffer, " \t\n");
        int value = strtol(strtok(NULL, " \t\n"), NULL, 10);

        currencies[num_currencies].name = (char *)malloc(strlen(name) * sizeof(char));
        if (currencies[num_currencies].name == NULL) {
            printf("Could not allocate memory.\n");
            exit(1);
        }
        strcpy(currencies[num_currencies].name, name);
        currencies[num_currencies].value = value;

        num_currencies++;
    }

    fclose(file);
    free(buffer);

    printf("| %-10s | %-10s |\n", "Name", "Value");
    printf("|____________|____________|\n");
    for (int i = 0; i < num_currencies; i++) {
        printf("| %-10s | %10d |\n", currencies[i].name, currencies[i].value);
        free(currencies[i].name);
    }

    return 0;
}
