#include <stdio.h>
int main(){
    int matrix[3][3], null_flag = 1, ut_flag = 1, lt_flag = 1;
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            printf("Enter a number for row %d, column %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            if (null_flag == 1 && matrix[i][j] != 0)
                null_flag = 0;
            if (ut_flag == 1 && i>j && matrix[i][j] != 0)
                ut_flag = 0;
            if (lt_flag == 1 && i<j && matrix[i][j] != 0)
                lt_flag = 0;
        }
    }

    if (null_flag == 1){
        printf("\nMatrix satisfies the following types: Null Matrix, Diagonal Matrix, Upper Triangular Matrix, Lower Triangular Matrix.");
    }
    else{
        if (ut_flag == 1 && lt_flag == 1)
            printf("\nMatrix satisfies the following types: Diagonal Matrix, Upper Triangular Matrix, Lower Triangular Matrix.");
        else if (ut_flag == 1)
            printf("\nMatrix satisfies the following type: Upper Triangular Matrix.");
        else if (lt_flag == 1)
            printf("\nMatrix satisfies the following type: Lower Triangular Matrix.");
        else
            printf("\nMatrix does not satisfy any of the types being checked.");
    }

    printf("\nDiagonal Elements:\n");
    for (int i=0; i<3; i++)
        printf("%d ", matrix[i][i]);

    printf("\nUpper Triangular Elements:\n");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (i < j)
                printf("%d ", matrix[i][j]);
        }

    }

    printf("\nLower Triangular Elements: \n");
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (i > j)
                printf("%d ", matrix[i][j]);
        }

    }


}