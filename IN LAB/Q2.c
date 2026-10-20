#include <stdio.h>
int main(){
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=i; j++){
            if (j%2 == 0)
                printf("%d ", j*j);
            else
                printf("%d ", j*j*j);
        }
        printf("\n");
    }
}
