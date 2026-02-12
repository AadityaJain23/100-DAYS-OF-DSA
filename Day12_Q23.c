/* Problem: Write a program to check whether a given matrix is symmetric. A matrix is said to be symmetric if it is a square matrix and is equal to its transpose (i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).

Input:
- First line: two integers m and n representing the number of rows and columns
- Next m lines: n integers each representing the elements of the matrix

Output:
- Print "Symmetric Matrix" if the given matrix is symmetric
- Otherwise, print "Not a Symmetric Matrix"

Example:
Input:
3 3
1 2 3
2 4 5
3 5 6

Output:
Symmetric Matrix

Explanation:
The matrix is square (3 × 3) and for every i and j, element[i][j] = element[j][i].

Test Cases:

Test Case 1:
Input:
2 2
1 2
2 1
Output:
Symmetric Matrix

Test Case 2:
Input:
3 3
1 0 1
2 3 4
1 4 5
Output:
Not a Symmetric Matrix

Test Case 3:
Input:
2 3
1 2 3
4 5 6
Output:
Not a Symmetric Matrix
*/

#include<stdio.h>
int main(){
    int i, j;
    int rows, cols, symmetric = 1;
    int matrix[50][50];
    int transpose[50][50];
    printf("Enter the order of matrix (row,column) = ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of Matrix (%d x %d) in row-major order= \n",rows,cols);
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }   
    }

    printf("\nThe matrix is = \n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            transpose[j][i]= matrix[i][j];
        }
    }

    if(rows != cols){
        printf("False, as matrix is not a square martix\n");
        return 0;
    }

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            if(matrix[i][j] != transpose[i][j]){
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric == 1){
        printf("Symmetric Matrix");
    }else{
        printf("Not a Symmetric Matrix");
    }

    return 0;
}
        