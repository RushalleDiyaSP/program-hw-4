#include <stdio.h>
#include "knapsack.h"

int main() {
    // Solve knapsack problem for instance with n=5
    printf("Solving knapsack problem for instance with n=5...\n");
    brute_force_knapsack("program4_n5_knapsack01");
    dynamic_programming_knapsack("program4_n5_knapsack01");
    greedy_knapsack("program4_n5_knapsack01");

    // Solve knapsack problem for instance with n=6
    printf("\nSolving knapsack problem for instance with n=6...\n");
    brute_force_knapsack("program4_n6_knapsack01");
    dynamic_programming_knapsack("program4_n6_knapsack01");
    greedy_knapsack("program4_n6_knapsack01");

    return 0;
}
