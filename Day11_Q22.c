/*Transpose Matrix

Given a 2D integer array matrix, return the transpose of matrix.

The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]

Example 2:
Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]
*/

#include<stdio.h>
int main(){
    
    int rows, cols;
    printf("Enter the order of matrix (row,column) = ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int transpose[cols][rows];
    int i, j;

    printf("Enter elements of Matrix (%d x %d) in row-major order= \n",rows,cols);
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }   
    }

    printf("The matrix is= \n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++) 
            transpose[j][i]= matrix[i][j];
        }

    printf("The Transpose matrix is : \n");
    for(i = 0; i < cols; i++){
        for(j = 0; j < rows; j++){
        printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}