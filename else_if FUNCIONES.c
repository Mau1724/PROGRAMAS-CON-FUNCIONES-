/*else if con funciones*/
#include <stdio.h>

float calculateTotalPrice(int quantity, float unitPrice) {
    float total = 0;
    if (quantity > 100)
        total = quantity * unitPrice * 0.6;
    else if (quantity >= 25)
        total = quantity * unitPrice * 0.8;
    else if (quantity >= 10)
        total = quantity * unitPrice * 0.9;
    else
        total = quantity * unitPrice;
    return total;
}

void printReceipt(int articleCode, int quantity, float unitPrice) {
    printf("\n\n%10s %10s %10s %10s %10s\n\n",
           "Artículo", "Cantidad", "P. U.", "Dto.", "Total");
    printf("%10d %10d %10.2f", articleCode, quantity, unitPrice);
    
    float total = calculateTotalPrice(quantity, unitPrice);
    float discount = 0;
    if (quantity > 100)
        discount = 40;
    else if (quantity >= 25)
        discount = 20;
    else if (quantity >= 10)
        discount = 10;
    else
        discount = 0;
    
    printf(" %9.0f%% %10.2f\n", discount, total);
}

int main() {
    int articleCode, quantity;
    float unitPrice;

    printf("Código artículo....... ");
    scanf("%d", &articleCode);
    printf("Cantidad comprada..... ");
    scanf("%d", &quantity);
    printf("Precio unitario....... ");
    scanf("%f", &unitPrice);
    
    printReceipt(articleCode, quantity, unitPrice);

    return 0;
}

