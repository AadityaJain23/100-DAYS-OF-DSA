/* Spiral Matrix

Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

Example 2:
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
*/

//APPROACH 2

#include<stdio.h>

int main(){
    int r, c;
    int matrix[100][100];
    int visited[100][100] = {0};

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int total = r * c;
    int count = 0;

    int dir = 0; 
    int row = 0, col = 0;

    while(count < total){

        printf("%d ", matrix[row][col]);
        visited[row][col] = 1;
        count++;

       
        if(dir == 0){
            if(col + 1 < c && !visited[row][col + 1]){
                col++;
            }else{
                dir = 1;
                row++;
            }
        }else if(dir == 1){
            if(row + 1 < r && !visited[row + 1][col])
                row++;
            else{
                dir = 2;
                col--;
            }
        }
        
        else if(dir == 2){
            if (col - 1 >= 0 && !visited[row][col - 1])
                col--;
            else{
                dir = 3;
                row--;
            }
        }
    
        else {
            if(row - 1 >= 0 && !visited[row - 1][col])
                row--;
            else{
                dir = 0;
                col++;
            }
        }
    }

    return 0;
}
