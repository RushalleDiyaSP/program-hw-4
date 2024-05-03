#include "knapsack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void brute_force_knapsack(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    int n, capacity;
    fscanf(fp, "%d", &n);
    int *profits = (int *)malloc(n * sizeof(int));
    int *weights = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        char item[20];
        fscanf(fp, "%s", item);
        fscanf(fp, "%d", &profits[i]);
        fscanf(fp, "%d", &weights[i]);
    }
    fscanf(fp, "%d", &capacity);
    fclose(fp);

    // Brute force algorithm here

    free(profits);
    free(weights);
}
