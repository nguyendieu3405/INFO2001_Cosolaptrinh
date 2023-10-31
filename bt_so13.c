/*Bài 13: Viết chương trình tính tiền cước TAXI. Biết rằng:
a) km đầu tiên giá là 5000đ
b) 200m tiếp theo là 1000đ.
c) Nếu lớn hơn 30km thì mỗi km thêm sẽ là 3000đ*/
#include <stdio.h>

int main() {
    float distance, Cost;
    printf("nhap khoang cach (km): ");
    scanf("%f", &distance);
    if (distance <= 0) {
        printf("INVALID.\n");
    } else if (distance <= 1) {
    } else if (distance <= 30) {
        Cost = 5000 + (distance - 1) * 1000;
    } else {
        Cost = 5000 + 29 * 1000 + (distance - 30) * 3000; 
    }
    printf("Tien phai tra: %.0f VND \n", Cost);
    return 0;
}
