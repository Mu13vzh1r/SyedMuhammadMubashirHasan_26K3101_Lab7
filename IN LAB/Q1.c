#include <stdio.h>
int main(){
    float products[5][2] =
    {
        {3, 9.99},
        {2,10.50},
        {3, 15},
        {1, 50},
        {5, 1.99}
    };
    float grand_total, quantity, price;
    for (int i = 0; i<5; i++){
        printf("Product %d\n", i+1);

        for (int j = 0; j<2; j++){
            if (j==0){
                printf("Quantity: %.0f\n", products[i][j]);
                quantity = products[i][j];
            }
            else{
                printf("Unit Price: Rs.%.2f\n", products[i][j]);
                price = products[i][j];
            }
        }
        printf("Total Price: Rs.%.2f\n\n", price*quantity);
        grand_total += price*quantity;
    }
    printf("Grand Total: Rs.%.2f", grand_total);
}