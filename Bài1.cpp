#include <stdio.h>
int main()
{
    int number;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    // Kiem tra so am, duong
    if (number > 0) {
        printf("%d là so duong.\n", number);
    } else if (number < 0) {
        printf("%d là so âm.\n", number);
    } else {
        printf("So ban nhap là 0.\n");
    }

    return 0;
}
