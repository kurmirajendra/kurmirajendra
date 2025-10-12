#include <stdio.h>

int main() {
    int arr[] = {-3, -2, 0, -7, 25, 35, -12, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("Average of positive numbers is %.2f\n", average);
    } else {
        printf("No positive numbers in the array.\n");
    }

    return 0;
}

