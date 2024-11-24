#include <stdio.h>

int main() {
    int number;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    // Kiem tra so chan, le
    if (number % 2 == 0) {
        printf("%d là so chan.\n", number);
    } else if (number % 2 != 0) {
        printf("%d la so le.\n", number);
    } else {
        printf("So ban nhap la 0.\n");
    }

    return 0;
}
