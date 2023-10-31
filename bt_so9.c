#include <stdio.h>

int main() {
    int day, month, year;

    printf("Nhap ngay thang nam: ");
    scanf("%d %d %d", &day,&month,&year);
    int isValid = 1; // Giả sử ngày tháng năm hợp lệ
    if (year < 0) {
        isValid = 0; // Năm không hợp lệ
    }
    if (month < 1 || month > 12) {
        isValid = 0; // Tháng không hợp lệ
    }
    if (day < 1 || day > 31) {
        isValid = 0; // Ngày không hợp lệ
    }
    if (isValid) {
        printf("Ngay thang nam hop le.\n");
    } else {
        printf("INVALID.\n");
    }
    return 0;
}
