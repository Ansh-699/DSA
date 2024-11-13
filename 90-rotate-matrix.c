#include <stdio.h>


    void rotateMatrix(int matrix[3][3]){
         for (int j = 0; j < 3; j++) {
        for (int i = 2; i >= 0; i--) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    }


void inputMatrix(int matrix[3][3]) {
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int matrix[3][3];
    inputMatrix(matrix);

    printf("The entered matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("The 90-degree rotated matrix is:\n");
    rotateMatrix(matrix);
   

    return 0;
}