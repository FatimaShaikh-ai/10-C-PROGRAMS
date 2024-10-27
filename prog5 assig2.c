#include <stdio.h>

int main() {
    float temperature, convertedTemp;
    int choice;

    
    printf("Temperature Conversion Program\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose an option (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        convertedTemp = (temperature * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", convertedTemp);
    } else if (choice == 2) {
        
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        convertedTemp = (temperature - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f\n", convertedTemp);
    } else {
        printf("Invalid choice! Please choose either 1 or 2.\n");
    }

    return 0;
}

