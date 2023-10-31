/*Bài 7: Viết chương trình nhập vào một số nguyên n gồm ba chữ số. Xuất ra màn
hình chữ số lớn nhất ở vị trí nào? Ví dụ: n=291. Chữ số lớn nhất nằm ở
hàng chục là 9.*/
#include <stdio.h>

int main() {
    int n;
    printf("Nhap so co 3 chu so: ");
    scanf("%d", &n);
    int hundreds,tens,unit_row;
    
    hundreds = n / 100;
    tens = (n / 10) % 10;
    unit_row = n % 10;

    int max = hundreds;
    char position = 'h'; // h: hàng tram, c: hàng ch?c, d: hàng don v?

    if (tens > max) {
        max = tens;
        position = 'c';
    }
    
    if (unit_row > max) {
        max = unit_row;
        position = 'd';
    }
    printf("Chu so lon nhat la %d va nam o vi tri ", max);
    if (position == 'h') {
        printf("hang tram.\n");
    } else if (position == 'c') {
        printf("hang chuc.\n");
    } else {
        printf("hang don vi.\n");
    }
    return 0;
}
