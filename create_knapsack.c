#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void create_knapsack(const char *filename) {
    srand(time(NULL));
    int n = rand() % 6 + 5; // Generate random number of items between 5 and 10
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    fprintf(fp, "%d\n", n);
    int capacity = 0;
    for (int i = 0; i < n; i++) {
        int profit = rand() % 21 + 10; // Generate random profit between 10 and 30
        int weight = rand() % 16 + 5;  // Generate random weight between 5 and 20
        fprintf(fp, "Item%d\n", i + 1);
        fprintf(fp, "%d\n", profit);
        fprintf(fp, "%d\n", weight);
        capacity += weight;
    }
    capacity = (int)(0.6 * capacity);
    fprintf(fp, "%d\n", capacity);
    fclose(fp);
}
