#include <stdio.h>
#include <math.h>
int main() {
int p, quantDig;
    printf("Enter quantity of digits:\n");
    scanf("%d",&p);
    if (p < 1 || p >= 30) {
        printf("Quantity should be from 2 to 30\n");
        return 1;
    }
    quantDig = pow(2, p) - (p-2);
    printf("Quantity numbers with %d digits: %d", p, quantDig);
    return 0;
}
