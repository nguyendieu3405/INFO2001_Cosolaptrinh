/*Bài 12: Viết chương trình tính diện tích và chu vi các hình: tam giác, hình vuông,
hình chữ nhật và hình tròn với những thông tin cần được nhập từ bàn phím.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double area, perimeter;

    printf("Chọn hình cần tính (1: tam giác, 2: hình vuông, 3: hình chữ nhật, 4: hình tròn): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Tính diện tích và chu vi của tam giác
            int a, b, c;
            printf("Nhap cac canh a,b,c: ");
            scanf("%d %d %d", &a,&b,&c);
            perimeter = a + b + c;
            double s = perimeter / 2;
            area = sqrt(s * (s - a) * (s - b) * (s - c));
            break;

        case 2: // Tính diện tích và chu vi của hình vuông
            int  side;
            printf("Nhap chieu dai hinh vuong ");
            scanf("%d", &side);
            area = side * side;
            perimeter = 4 * side;
            break;

        case 3: // Tính diện tích và chu vi của hình chữ nhật
            int length, width;
            printf("Nhap chieu dai va chieu rong hcn: ");
            scanf("%d %d", &length,&width);
            area = length * width;
            perimeter = 2 * (length + width);
            break;

        case 4: // Tính diện tích và chu vi của hình tròn
            int radius;
            int M_PI =3.14;
            printf("Nhap ban kinh hinh tron:  ");
            scanf("%d", &radius);
            area = M_PI * radius * radius;
            perimeter = 2 * M_PI * radius;
            break;

        default:
            printf("INVALID.\n");
            return 1;
    }

    printf("Diện tích: %.2lf\n", area);
    printf("Chu vi: %.2lf\n", perimeter);

    return 0;
}
