#include <stdio.h>
int main() {
    int month;
    printf("Nhap vao thang: ");
    scanf("%d", &month);
   // Kiem tra thang hop le khong
    if (month < 1 || month > 12) {
        printf("So thang khong hop le.\n");
    } else {
        // Kiem tra so ngay trong thang
        switch (month) {
            case 4:
            case 6:
            case 9:
            case 11:
                printf("Thang %d co 30 ngay.\n", month);
                break;
            case 2:
                printf("Thang 2 co 28 hoac 29 ngay (nam nhuan).\n");
                break;
            default:
                printf("Thang %d co 31 ngay.\n", month);
        }
    }
    return 0;
}
