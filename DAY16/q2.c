#include <stdio.h>

int main() 
 {
    int a[100], n;
    int maxFreq = 0, maxElement;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
       
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
       
        int count = 1;

        for (int j = i + 1; j < n; j++) {
           
            if (a[i] == a[j]) {
                count++;
            }
        }

        if (count > maxFreq) {
            maxFreq = count;
           
            maxElement = a[i];
        }
    }

    printf("Maximum frequency element = %d\n", maxElement);
   
    printf("Frequency = %d\n", maxFreq);

    return 0;
}