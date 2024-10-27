#include <stdio.h>

int main() {
    float totalAmount, discount = 0, finalAmount;

    
    printf("Enter total shopping amount: ");
    scanf("%f", &totalAmount);

    
    if (totalAmount > 5000) {
        discount = 0.20 * totalAmount;  
    } else if (totalAmount >= 3000) {
        discount = 0.10 * totalAmount;  
    }

    
    finalAmount = totalAmount - discount;

    
    printf("Total Amount: %.2f\n", totalAmount);
    printf("Discount Applied: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}

