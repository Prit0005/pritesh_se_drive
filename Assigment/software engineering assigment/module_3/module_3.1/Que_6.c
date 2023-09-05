//WAP to convert years into days and days into years 

#include <stdio.h>

int main() {
    int choice;
    double years, days;

    printf("Choose an option:\n");
    printf("1. Convert years to days\n");
    printf("2. Convert days to years\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the number of years: ");
            scanf("%lf", &years);
            days = years * 365.25; 
            printf("%.2lf years is approximately %.2lf days.\n", years, days);
            break;
        case 2:
            printf("Enter the number of days: ");
            scanf("%lf", &days);
            years = days / 365.25; 
            printf("%.2lf days is approximately %.2lf years.\n", days, years);
            break;
        default:
            printf("Invalid choice. Please select 1 or 2.\n");
            break;
    }

    return 0;
}
