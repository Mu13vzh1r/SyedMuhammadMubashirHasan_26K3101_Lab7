#include <stdio.h>
int main(){
    int matrix1[3][3], matrix2[3][3], matrix3[3][3];
    printf("Enter values for matrix 1:\n");
    for (int i = 0; i<3; i++){
        printf("Enter 3 values for row %d\n", i+1);
        scanf("%d %d %d", &matrix1[i][0], &matrix1[i][1], &matrix1[i][2]);
    }    
    printf("Enter values for matrix 2:\n");
    for (int i = 0; i<3; i++){
        printf("Enter 3 values for row %d\n", i+1);
        scanf("%d %d %d", &matrix2[i][0], &matrix2[i][1], &matrix2[i][2]);
    }  

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
        if (i == 1){
            printf("[%3d %3d %3d] + ", matrix1[i][0], matrix1[i][1], matrix1[i][2]);
            printf("[%3d %3d %3d] = ", matrix2[i][0], matrix2[i][1], matrix2[i][2]);
            printf("[%3d %3d %3d]", matrix3[i][0], matrix3[i][1], matrix3[i][2]);
        }
        else{
            printf("[%3d %3d %3d]   ", matrix1[i][0], matrix1[i][1], matrix1[i][2]);
            printf("[%3d %3d %3d]   ", matrix2[i][0], matrix2[i][1], matrix2[i][2]);
            printf("[%3d %3d %3d]", matrix3[i][0], matrix3[i][1], matrix3[i][2]);      
        }
        printf("\n");
    }
}