/*Bài 15: Viết chương trình nhập vào số nguyên dương n. Kiểm tra xem n có phải là
số chính phương hay không? (số chính phương là số khi lấy căn bặc 2 có kết
quả là nguyên).*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    if (n > 0) {
        double sqrt_n = sqrt(n);
        if (sqrt_n == (int)sqrt_n) {
            printf("%d la so chinh phuong.\n", n);
        } 
        else {
            printf("%d ko phai la so chinh phuong.\n", n);
        }
    }
    else {
        printf("vui long nhap so nguyen duong.\n");
    }
    return 0;
}
