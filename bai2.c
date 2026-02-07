#include <stdio.h>

int main() {
    int n, i;
    
    // 1. Input the size of the array
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);
    
    int a[n]; // Declaring array of size n

    // 2. Input array elements
    for(i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // 3. Initialize max and min with the first element
    int max = a[0];
    int min = a[0];

    // 4. Loop to compare and find min/max
    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
        if(a[i] < min) {
            min = a[i];
        }
    }

    // 5. Output results
    printf("\nGia tri lon nhat: %d", max);
    printf("\nGia tri nho nhat: %d\n", min);

    return 0;
}