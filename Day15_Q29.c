/* Problem: Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.

Input:
- First line: two integers m and n
- Next m lines: n integers each

Output:
- Print the sum of the primary diagonal elements

Example:
Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
15
*/

#include <stdio.h>
int main(){
    
    int n, m, sum = 0;
    int i, j;
    int matrix[50][50];
    printf("Enter the order of matrix (row,column) = ");
    scanf("%d %d", &n, &m);

    if(n != m){
        printf("Matrix is not square.");
        return 0;
    }

    printf("Enter elements of Matrix (%d x %d)=\n",m,n);
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix is= \n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < n; i++){
        sum += matrix[i][i];   
    }

    printf("The sum of main diagonal elements are = %d\n", sum);

    return 0;
}
