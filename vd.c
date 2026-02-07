#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// HÀM PHÁT SINH NGẪU NHIÊN CÁC PHẦN TỬ CỦA MẢNG
void randomArray(int arr[], int size, int min, int max) {
    srand(time(NULL)); // Khởi tạo bộ sinh số ngẫu nhiên
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

// HÀM IN MẢNG
void printArray(int arr[], int size) {
    printf("Cac phan tu cua mang la:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n = 10;        // Số lượng phần tử
    int a[n];
    
    // Gọi hàm tạo mảng ngẫu nhiên từ 1 đến 100
    randomArray(a, n, 1, 100);
    
    // Gọi hàm in mảng ra màn hình
    printArray(a, n);
    
    return 0;
}