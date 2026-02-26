#include <stdio.h>

int main() {
    int n, i;

    // Bước 1: Nhập số lượng phần tử n
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    // Kiểm tra điều kiện n để tránh lỗi bộ nhớ
    if (n <= 0) {
        printf("So phan tu phai lon hon 0!\n");
        return 1;
    }

    int a[n]; // Khai báo mảng có n phần tử

    // Bước 2: Nhập các phần tử của mảng
    for (i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Bước 3: Giả sử phần tử đầu tiên là Max và Min
    int max = a[0];
    int min = a[0];

    // Bước 4: Duyệt mảng từ phần tử thứ 2 để tìm Max, Min thực sự
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i]; // Cập nhật Max nếu tìm thấy số lớn hơn
        }
        if (a[i] < min) {
            min = a[i]; // Cập nhật Min nếu tìm thấy số nhỏ hơn
        }
    }

    // Bước 5: In kết quả ra màn hình
    printf("\n--- KET QUA ---");
    printf("\nGia tri lon nhat (Max) la: %d", max);
    printf("\nGia tri nho nhat (Min) la: %d\n", min);

    return 0;
}