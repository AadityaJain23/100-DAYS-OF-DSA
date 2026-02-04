/* Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the reversed array, space-separated

Example:
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1
*/

#include<stdio.h>
int main(){
    
    int n, arr[50], i;
    int left = 0, right;
    int temp;

    printf("Enter size of array = ");
    scanf("%d", &n);
    right = n - 1;
    printf("Enter the elements of an array = ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    while(left < right){
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    printf("Reversed array= ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
