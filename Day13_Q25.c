/* Problem: You are given a rectangular matrix of integers. Starting from the outer boundary, traverse the matrix in a clockwise manner and continue moving inward layer by layer until all elements are visited.

Input:
- First line: two integers r and c representing the number of rows and columns
- Next r lines: c integers each representing the matrix elements

Output:
- Print all visited elements in the order of traversal, separated by spaces

Example:
Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
1 2 3 6 9 8 7 4 5

Test Cases:

Test Case 1:
Input:
2 3
1 2 3
4 5 6
Output:
1 2 3 6 5 4

Test Case 2:
Input:
3 1
7
8
9
Output:
7 8 9
*/

#include <stdio.h>

int main(){
    int r, c, i, j;
    int matrix[100][100];

    printf("Enter the order of matrix (row,column) = ");
    scanf("%d %d", &r, &c);
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nMatrix = \n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSprial element are = ");
    int top = 0, bottom = r - 1;
    int left = 0, right = c - 1;

    while(top <= bottom && left <= right){

        for(int i = left; i <= right; i++){
            printf("%d ", matrix[top][i]);
        }top++;

        for(i = top; i <= bottom; i++){
            printf("%d ", matrix[i][right]);
        }right--;

        if(top <= bottom){
            for(i = right; i >= left; i--){
                printf("%d ", matrix[bottom][i]);
            }bottom--;
        }
        
        if(left <= right){
            for(i = bottom; i >= top; i--){
                printf("%d ", matrix[i][left]);
            }left++;
        }
    }

    return 0;
}
