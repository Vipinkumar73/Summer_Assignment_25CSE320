#include <stdio.h>

int main() {
    int a[100], n;
    int sum = 0, total, missing;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    total = (n + 1) * (n + 2) / 2;
    missing = total - sum;

    printf("Missing element = %d\n", missing);

    return 0;
}