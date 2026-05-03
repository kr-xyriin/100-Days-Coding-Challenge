// Ques22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float cp, sp, profit, loss, profit_per, loss_per;
    printf("Enter the cost price and selling price of the item: ");
    scanf("%f %f", &cp, &sp);
    if (sp > cp) {
        profit = sp - cp;
        profit_per = (profit/cp)*100;
        printf("Profit = %.2f\nProfit percentage: %.2f%%", profit, profit_per);
    }
    else if (cp == sp) {
        printf("No profit or Loss\n");
    }
    else {
        loss = cp - sp;
        loss_per = (loss/cp)*100;
        printf("Loss = %.2f\nLoss percentage: %.2f%%", loss, loss_per);
    }
    return 0;
}