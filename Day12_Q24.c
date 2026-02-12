/* Toeplitz Matrix

Given an m x n matrix, return true if the matrix is Toeplitz. Otherwise, return false.

A matrix is Toeplitz if every diagonal from top-left to bottom-right has the same elements.

Example 1:
Input: matrix = [[1,2,3,4],[5,1,2,3],[9,5,1,2]]
Output: true

Example 2:
Input: matrix = [[1,2],[2,2]]
Output: false
*/

#include<stdio.h>
#include<stdbool.h>
int main(){

    bool isToeplitz = true;
    int A[100][100];
    int m, n, i, j;
    printf("Enter the order of matrix A (row,column) = ");
    scanf("%d %d",&m,&n);

    printf("Enter elements of Matrix A (%d x %d) in row-major order: \n",m,n);
    for(int i = 0; i < m; i++){
        for(int j = 0 ; j < n; j++){
            scanf("%d",&A[i][j]);
        }
    }

    for(i = 1; i < m; i++){
        for(j = 1; j < n; j++){
            if (A[i][j] != A[i-1][j-1]){
                isToeplitz = false;
                break;
            }
        }
        if(!isToeplitz){
            break;
        }
    }
    
    if(isToeplitz){
        printf("true\n");
    }else{
        printf("false\n");
    }

    return 0;

}