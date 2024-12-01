#include <stdio.h>

// Function to calculate determinant of 3x3 matrix
float determinant(float matrix[3][3]) {
    float det;
    det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
        - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
        + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    return det;
}

// Function to calculate inverse of 3x3 matrix
void inverse(float matrix[3][3], float inverseMatrix[3][3]) {
    float det = determinant(matrix);
    if (det == 0) {
        printf("Matrix has no inverse (determinant is zero).\n");
        return;
    }

    // Cofactor matrix calculation
    inverseMatrix[0][0] =  (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) / det;
    inverseMatrix[0][1] = -(matrix[0][1] * matrix[2][2] - matrix[0][2] * matrix[2][1]) / det;
    inverseMatrix[0][2] =  (matrix[0][1] * matrix[1][2] - matrix[0][2] * matrix[1][1]) / det;
    
    inverseMatrix[1][0] = -(matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) / det;
    inverseMatrix[1][1] =  (matrix[0][0] * matrix[2][2] - matrix[0][2] * matrix[2][0]) / det;
    inverseMatrix[1][2] = -(matrix[0][0] * matrix[1][2] - matrix[0][2] * matrix[1][0]) / det;
    
    inverseMatrix[2][0] =  (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]) / det;
    inverseMatrix[2][1] = -(matrix[0][0] * matrix[2][1] - matrix[0][1] * matrix[2][0]) / det;
    inverseMatrix[2][2] =  (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]) / det;
}

// Function to print 3x3 matrix
void printMatrix(float matrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%f\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matrix[3][3] = {
        {3, 0, 2},
        {2, 0, -2},
        {0, 1, 1}
    };

    float inverseMatrix[3][3];

    printf("Original matrix:\n");
    printMatrix(matrix);

    inverse(matrix, inverseMatrix);

    printf("\nInverse matrix:\n");
    printMatrix(inverseMatrix);

    return 0;
}