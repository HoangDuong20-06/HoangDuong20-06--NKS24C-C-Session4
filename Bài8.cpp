#include <stdio.h>
int main()
{
    float a, b, c;
    // Nhap do dai ba canh
    printf("Nhap vao do dai ba canh cua tam giac: ");
    scanf("%f %f %f", &a, &b, &c);
    // Kiem tra dieu kien de tao thanh tam giac
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh cua mot tam giac.\n");
    } else {
        printf("Khong phai 3 canh cua mot tam giac.\n");
    }
    return 0;
}
