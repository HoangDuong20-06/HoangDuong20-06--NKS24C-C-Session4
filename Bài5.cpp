#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Nhap vao ba so nguyen: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    // Sap xep các so de dam bao num1 <= num2
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    // Kiem tra xem num3 co nam trong khoang giua num1 va num2 khong
    if (num3 > num1 && num3 < num2) {
        printf("%d nam trong khoang giua %d va %d.\n", num3, num1, num2);
    } else {
        printf("%d khong nam trong khoang gia %d và %d.\n", num3, num1, num2);
    }
    return 0;
}
