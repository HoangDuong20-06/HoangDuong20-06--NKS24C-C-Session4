#include <stdio.h>
int main()
{
    int day, month, year;
    int daysinmonth;
    // Nhap ngay, thang, nam
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);
    // Kiem tra thang hop le khong
    if (month < 1 || month > 12) {
        printf("Thang khong hop le.\n");
        return 0;
    }
    // Kiem tra nam nhuan
    int isleapyear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    // Xac dinh so ngay trong thang
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daysinmonth = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            daysinmonth = 30;
            break;
        case 2:
            daysinmonth = isleapyear ? 29 : 28;
            break;
    }
    // Kiem tra ngay hop le khong
    if (day < 1 || day > daysinmonth) {
        printf("Ngay khong hop le.\n");
    } else {
        printf("Ngay %d/%d/%d la hop le.\n", day, month, year);
    }
    return 0;
}
