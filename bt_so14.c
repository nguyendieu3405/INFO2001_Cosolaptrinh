/*Bài 14: Nhập vào 3 số nguyên dương a, b, c. Kiểm tra xem 3 số đó có lập thành tam
giác không? Nếu có hãy cho biết tam giác đó thuộc loại nào? (cân, vuông,
đều, …).*/
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap 3 so: a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Day la tam giac deu.\n");
        }
        else if (a == b || a == c || b == c) {
            printf("Day la tam giac can.\n");
        } 
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            printf("Day la tam giac vuong.\n");
        } 
        else {
            printf("Day la tam giac thuong.\n");
        }
    } else {
        printf("Khong the tao thanh mot tam giac.\n");
    }
    return 0;
}
