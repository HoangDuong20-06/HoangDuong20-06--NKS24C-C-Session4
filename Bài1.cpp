#include <stdio.h>
int main()
{
    int number;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    // Kiem tra so am, duong
    if (number > 0) {
        printf("%d l� so duong.\n", number);
    } else if (number < 0) {
        printf("%d l� so �m.\n", number);
    } else {
        printf("So ban nhap l� 0.\n");
    }

    return 0;
}
